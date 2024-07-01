import time
import os
from builtin_interfaces.msg import Time as TimeMsg
import numpy as np

from .core.ab3dmot import AB3DMOT
from .core.utils import ros_utils
from .core.utils import geometry_utils
from .core.utils.config import cfg, cfg_from_yaml_file, log_config_to_file

import rclpy
from rclpy.node import Node
from rclpy.time import Time
from rclpy.duration import Duration
from rclpy.exceptions import ROSInterruptException

from std_msgs.msg import Header, Bool
from vision_msgs.msg import Detection3DArray, Detection3D, ObjectHypothesisWithPose, BoundingBox3D
from geometry_msgs.msg import Point, Quaternion, Vector3, Pose, Twist
from tracking_msgs.msg import Obstacle as ObstacleMsg
from tracking_msgs.msg import ObstacleList as ObstaclelistMsg
from tracking_msgs.msg import TrackedObstacle as TrackedObstacleMsg
from tracking_msgs.msg import TrackedObstacleList as TrackedObstacleListMsg
from tracking_msgs.msg import TrackedObstacleState as TrackedObstacleStateMsg



from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
import tf_transformations as tr

class trackerNode(Node):
    def __init__(self, config_path, publish_frequency):
        super().__init__('tracker_node')

        # Declare parameters
        self.declare_parameter("max_age", 6)
        self.declare_parameter("min_hits", 2)
        self.declare_parameter("reference_frame", "camera_frame")
        self.declare_parameter("default_distance_threshold", 3)
        self.declare_parameter("velocity_filter_constant", 5.0)
        self.declare_parameter("velocity_prediction_horizon", 0.5)
        self.declare_parameter("prediction_resolution", 0.5)
        self.declare_parameter("prediction_length", 4.0)
        # self.declare_parameter("frequency", 10)
        self.declare_parameter('config_path', config_path)
        self.declare_parameter('publish_frequency', publish_frequency)

        # self.declare_parameter("config_path", "/home/kishoreyogaraj/tracking_ws/src/config/mahalanobis.yaml")

        # Get Parameters
        self.max_age = self.get_parameter("max_age").value
        self.min_hits = self.get_parameter("min_hits").value
        self.reference_frame = self.get_parameter("reference_frame").value
        self.default_distance_threshold = self.get_parameter("default_distance_threshold").value
        self.config_path = self.get_parameter("config_path").value
        self.velocity_prediction_horizon = self.get_parameter("velocity_prediction_horizon").value
        self.velocity_filter_constant = self.get_parameter("velocity_filter_constant").value
        self.prediction_resolution = self.get_parameter("prediction_resolution").value
        self.prediction_length = self.get_parameter("prediction_length").value
        # self.frequency = self.get_parameter("frequency").value
        self.config_path = self.get_parameter("config_path").value
        self.publish_frequency = self.get_parameter("publish_frequency").value
        # self.dt = 1.0 / self.frequency



        cfg_from_yaml_file(self.config_path, cfg)

        # Initialize Tracker
        self.mot_tracker = AB3DMOT(max_age=self.max_age, 	# max age in seconds of a track before deletion
                                   min_hits=self.min_hits,	# min number of detections before publishing
                                   tracking_name="N/A") 	# default tracking age
        
         # Velocities for each track
        self.velocities = {}
        # low pass filter constant for velocity
        self.velocity_filter_constant = self.get_parameter("velocity_filter_constant")

        
        # tf2 listener
        self.tf2_buffer = Buffer()
        self.tf2_listener = TransformListener(self.tf2_buffer, self)

        # Publishers/Subscribers
        self.detection_subscriber = self.create_subscription(Detection3DArray, 'detections', self.detection_callback, 10)

        self.tracked_obstacles_publisher = self.create_publisher(TrackedObstacleListMsg, 'tracked_obstacles', 10)

        # self.tracked_obstacles_timer = self.create_timer(1, self.publish_tracks)

    def reset(self):
        self.mot_tracker = AB3DMOT(max_age=self.max_age, 	
                                   min_hits=self.min_hits,	
                                   tracking_name="N/A") 	

    def track(self, detections, informations, frame_id, timestamp, update_only=False, distance_threshold=None):
        """
        Update all trackers.
        Input:
            detections: [[x,y,z,rz,w,l,h]...] list of list of doubles in the Odom frame
            informations: [[String, Double]...] list of list of class labels with confidence
            frame_id: String, frame name
            timestamp: rclpy.time detections timestamp
            update_only: Bool, only update tracks don't create new ones
            distance_threshold: euclidian distance threshold for association
        """
        if distance_threshold is None:
            distance_threshold = self.default_distance_threshold

        detections = np.array(detections)
        infos = np.array(informations, dtype=object)

        if frame_id != self.reference_frame and frame_id != "":
            try:
                bbox_to_reference_transform = self.tf2_buffer.lookup_transform(self.reference_frame, frame_id, rclpy.time.Time(), rclpy.time.Duration(0.1)).transform
            except:
                self.get_logger().error(f"Failed to look up transform from {self.reference_frame} to {frame_id}")
                return

            detections = geometry_utils.transform_boxes(detections, bbox_to_reference_transform)

        timestamp_sec = timestamp.sec + timestamp.nanosec * 1e-9
        # self.mot_tracker.update(detections, infos, timestamp_sec, update_only, distance_threshold)
        return self.mot_tracker.update(detections, infos, timestamp_sec, update_only, distance_threshold)

    def detection_callback(self, msg):
        # start_time = time.time()
        timestamp = msg.header.stamp
        frame_id = msg.header.frame_id

        detections = [] 		# [x, y, z, rot_y, l, w, h] empty list to store 3d bouding box infroation for ecah detected obstacle
        informations = []		# [class label, confidence score] empty list to store the classifcation informatio for each detected obstacels 


        for detection in msg.detections: #Iterates through each detection
            detections.append(ros_utils.obstacle_to_bbox(detection.bbox)) # Converts the bonding box information from teh Detection3D message into the required format mentioned above for detections
            informations.append([detection.results[0].hypothesis.class_id, detection.results[0].hypothesis.score]) #Extracts the calss lable of the first hypothesis from the detection results then extracts the confidence score and appends a list containg the class lale and confidece score to infromations list

        result = self.track(detections, informations, frame_id, timestamp)

        if result is not None:
            self.get_logger().info(f"Tracked Objects: {result}")

        # end_time = time.time()
        # self.get_logger().info(f"Processing time: {end_time - start_time:.4f} seconds")



    def publish_tracks(self, dt):
        """
        Publishes the tracks as obj_tracked. Also publishes the node status message
        dt: time since last update (in seconds)
        """
        # start_time = time.time()
        tracked_obstacle_list = TrackedObstacleListMsg() # Create an instance of message to be published

        # Set frame_id and timestamp in the header of the message
        tracked_obstacle_list.header.frame_id = self.reference_frame 
        tracked_obstacle_list.header.stamp = self.get_clock().now().to_msg()

        # Initialize an empty list to hold tracked obstacles
        tracked_obstacle_list.tracked_obstacles = []

        # For each tracker in the list, create a tracked obstacle message and append it to the list
        for kf_track in self.mot_tracker.trackers:
            tracking_name = kf_track.tracking_name
            track_score = kf_track.track_score
            x = kf_track.get_state()

            # Creates the message for each tracked obstacle from that message. The message type TrackedObstacleList (gets published) can have an array of tracked obstacles
            tracked_obstacle_message = self._create_tracked_obstacle_message(kf_track, tracking_name, track_score, dt)
            tracked_obstacle_list.tracked_obstacles.append(tracked_obstacle_message)

        #Publish entire message with multiple different trackers
        self.tracked_obstacles_publisher.publish(tracked_obstacle_list)

        self.get_logger().info(f"Published tracked obstacles: {tracked_obstacle_list}")

        # end_time = time.time()

        # self.get_logger().info(f"Publishing time: {end_time - start_time:.4f} seconds")


    def _create_tracked_obstacle_message(self, kf_track, tracking_name, track_score, dt):
        """
        Helper that creates the TrackedObstacle message from KalmanBoxTracker (python class)
        Args:
            kf_track: KalmanBoxTracker (Python class) object that represents the track
            tracking_name: String
            dt: time since last publish (in seconds)

        Returns: TrackedObstacle (anm_msgs)
        """

        tracked_obstacle_message = TrackedObstacleMsg()
        # Gets current bounding box estimates [x, y, z, rot_y, l, w, h, x_dot, y_dot, z_dot, rot_y_dot]
        bbox = kf_track.get_state()

        # Assigns obstacle coordinates to appropriate data fields in TrackedObstacleMsg
        tracked_obstacle_message.obstacle = ros_utils.bbox_to_obstacle(bbox, kf_track.id, tracking_name, track_score)
        tracked_obstacle_message.obstacle.header.frame_id = self.reference_frame
        tracked_obstacle_message.header.frame_id = self.reference_frame

        if len(kf_track.history) == 0:
            self.get_logger().info("No History for id {}".format(kf_track.id))
            return tracked_obstacle_message
        
        if kf_track.id not in self.velocities:
            self.velocities[kf_track.id] = np.array([0.0, 0.0])

        # Estimate velocity using KF track history
        latest_timestamp = kf_track.history[-1][0] # Retrieve timestamp of most recent entry into history list. [-1] Retrieves last tuple and [0] retrieves first element (timestamp)
        for timestamp, history in reversed(kf_track.history): # Iterates through the list of timestamps in reverse order
            dt = abs(latest_timestamp - timestamp) # Calculate time difference between latest time stamp and the timestamp in the loop
            if dt >= self.velocity_prediction_horizon: # Ensures states separate by significant time interval are considered for estimation
                # Ignore z velocity.
                new_velocity = np.array([(bbox[0] - history[0]) / dt, (bbox[1] - history[1]) / dt]) # Performs calculation to estimate new velocity for the current track
                # Use low pass filter to get better estimate
                alpha = dt / self.velocity_filter_constant.get_parameter_value().double_value
                self.velocities[kf_track.id] += alpha * (new_velocity - self.velocities[kf_track.id])
                break
    
        velocity = self.velocities[kf_track.id]

        # Set velocity
        tracked_obstacle_message.obstacle.twist.twist.linear.x = velocity[0]
        tracked_obstacle_message.obstacle.twist.twist.linear.y = velocity[1]

        # Create observation history messages. Creates another history list of trackers so that it can be used by ROS
        for timestamp, history in kf_track.history:
            # Correct way to create a Time object
            time_obj = Time()
            time_obj.sec = int(timestamp)
            time_obj.nanosec = int((timestamp - time_obj.sec) * 1e9)
            tracked_obstacle_message.observation_history.append(self.create_tracked_object_state_msg(time_obj, history))

        last_known_obs = tracked_obstacle_message.observation_history[-1]

        # Add the current observation
        tracked_obstacle_message.predicted_states.append(last_known_obs)

        # Convert current_time from builtin_interfaces.msg.Time to rclpy.time.Time
        current_time = Time.from_msg(last_known_obs.header.stamp)
        # Add prediction length duration to current_time
        max_pred_time = current_time + Duration(seconds=self.prediction_length)
        delta_time = 0

        # Initialize - first prediction is actual observation
        pred_time = current_time

        while (pred_time < max_pred_time):
            # rospy.loginfo('dt:{0}'.format(delta_time))
            delta_time +=  self.prediction_resolution

            pred_time += Duration(seconds=self.prediction_resolution)

            pred_obs = TrackedObstacleStateMsg()
            pred_obs.pose.position.x = last_known_obs.pose.position.x + (delta_time)*velocity[0]
            pred_obs.pose.position.y = last_known_obs.pose.position.y + (delta_time)*velocity[1]

            # zero velocity on Up direction
            pred_obs.pose.position.z = last_known_obs.pose.position.z

            pred_obs.pose.orientation = last_known_obs.pose.orientation
            pred_obs.velocity = last_known_obs.velocity
            pred_obs.header.stamp = pred_time.to_msg()
            pred_obs.header.frame_id = self.reference_frame

            tracked_obstacle_message.predicted_states.append(pred_obs)

        return tracked_obstacle_message
    
    def create_tracked_object_state_msg(self, timestamp, bbox):
        """Helper that creates the TrackedObstacleState message from a KF tracked state
        Args:
            timestamp: ROS timestamp
            bbox:  [x, y, z, rot_y, l, w, h, x_dot, y_dot, z_dot, rot_y_dot]
        Returns: TrackedObstacleState (anm_msgs)
        """
        tracked_object_state = TrackedObstacleStateMsg()
        tracked_object_state.header.frame_id = self.reference_frame

        time_msg = TimeMsg()
        time_msg.sec = timestamp.sec
        time_msg.nanosec = timestamp.nanosec
        tracked_object_state.header.stamp = time_msg

        tracked_object_state.pose.position.x = bbox[0]
        tracked_object_state.pose.position.y = bbox[1]
        tracked_object_state.pose.position.z = bbox[2]
        q = tr.quaternion_from_euler(0, 0, bbox[3])
        tracked_object_state.pose.orientation.x = q[0]
        tracked_object_state.pose.orientation.y = q[1]
        tracked_object_state.pose.orientation.z = q[2]
        tracked_object_state.pose.orientation.w = q[3]

        tracked_object_state.velocity.linear.x = bbox[7]
        tracked_object_state.velocity.linear.y = bbox[8]
        tracked_object_state.velocity.linear.z = bbox[9]
        if (len(bbox) == 11):
            tracked_object_state.velocity.angular.z = bbox[10]

        return tracked_object_state

def main (args=None):
    rclpy.init(args=args)
    node = rclpy.create_node('parameter_node')
    node.declare_parameter("config_path", "/home/kishoreyogaraj/tracking_ws/src/config/mahalanobis.yaml")
    node.declare_parameter('publish_frequency', 10)
    config_path = node.get_parameter('config_path').get_parameter_value().string_value
    publish_frequency = node.get_parameter('publish_frequency').get_parameter_value().double_value

    # node_dir = os.path.dirname(os.path.realpath(__file__))
    # root_dir = os.path.split(node_dir)[0]
    # top_dir = os.path.split(root_dir)[0]
    cfg_from_yaml_file(config_path, cfg)

    tracker_node = trackerNode(config_path, publish_frequency)

    try:
        while rclpy.ok():
            # tracker_node.publish_tracks(1 / 0.8)
            try:
                tracker_node.publish_tracks(1 / 0.8) # Messages are published every 1.25 seconds
            except Exception as e:
                tracker_node.get_logger().error(f"Error: Exception caught while processing a frame: {e}")
            try:
                rclpy.spin_once(tracker_node, timeout_sec=1.0 / 0.8) # Node has 1.25 seconds to process and publish messages
            except ROSInterruptException:
                tracker_node.reset()
                pass
    except ROSInterruptException:
        tracker_node.get_logger().info("Shutting down")

    tracker_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

