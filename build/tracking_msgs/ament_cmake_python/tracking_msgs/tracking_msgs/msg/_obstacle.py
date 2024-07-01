# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tracking_msgs:msg/Obstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Obstacle(type):
    """Metaclass of message 'Obstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tracking_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tracking_msgs.msg.Obstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle

            from geometry_msgs.msg import PoseWithCovariance
            if PoseWithCovariance.__class__._TYPE_SUPPORT is None:
                PoseWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistWithCovariance
            if TwistWithCovariance.__class__._TYPE_SUPPORT is None:
                TwistWithCovariance.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Obstacle(metaclass=Metaclass_Obstacle):
    """Message class 'Obstacle'."""

    __slots__ = [
        '_header',
        '_label',
        '_confidence',
        '_pose',
        '_twist',
        '_width_along_x_axis',
        '_height_along_y_axis',
        '_depth_along_z_axis',
        '_object_id',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'label': 'string',
        'confidence': 'float',
        'pose': 'geometry_msgs/PoseWithCovariance',
        'twist': 'geometry_msgs/TwistWithCovariance',
        'width_along_x_axis': 'double',
        'height_along_y_axis': 'double',
        'depth_along_z_axis': 'double',
        'object_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistWithCovariance'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.label = kwargs.get('label', str())
        self.confidence = kwargs.get('confidence', float())
        from geometry_msgs.msg import PoseWithCovariance
        self.pose = kwargs.get('pose', PoseWithCovariance())
        from geometry_msgs.msg import TwistWithCovariance
        self.twist = kwargs.get('twist', TwistWithCovariance())
        self.width_along_x_axis = kwargs.get('width_along_x_axis', float())
        self.height_along_y_axis = kwargs.get('height_along_y_axis', float())
        self.depth_along_z_axis = kwargs.get('depth_along_z_axis', float())
        self.object_id = kwargs.get('object_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.label != other.label:
            return False
        if self.confidence != other.confidence:
            return False
        if self.pose != other.pose:
            return False
        if self.twist != other.twist:
            return False
        if self.width_along_x_axis != other.width_along_x_axis:
            return False
        if self.height_along_y_axis != other.height_along_y_axis:
            return False
        if self.depth_along_z_axis != other.depth_along_z_axis:
            return False
        if self.object_id != other.object_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label' field must be of type 'str'"
        self._label = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovariance
            assert \
                isinstance(value, PoseWithCovariance), \
                "The 'pose' field must be a sub message of type 'PoseWithCovariance'"
        self._pose = value

    @builtins.property
    def twist(self):
        """Message field 'twist'."""
        return self._twist

    @twist.setter
    def twist(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistWithCovariance
            assert \
                isinstance(value, TwistWithCovariance), \
                "The 'twist' field must be a sub message of type 'TwistWithCovariance'"
        self._twist = value

    @builtins.property
    def width_along_x_axis(self):
        """Message field 'width_along_x_axis'."""
        return self._width_along_x_axis

    @width_along_x_axis.setter
    def width_along_x_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width_along_x_axis' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'width_along_x_axis' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._width_along_x_axis = value

    @builtins.property
    def height_along_y_axis(self):
        """Message field 'height_along_y_axis'."""
        return self._height_along_y_axis

    @height_along_y_axis.setter
    def height_along_y_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_along_y_axis' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'height_along_y_axis' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._height_along_y_axis = value

    @builtins.property
    def depth_along_z_axis(self):
        """Message field 'depth_along_z_axis'."""
        return self._depth_along_z_axis

    @depth_along_z_axis.setter
    def depth_along_z_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'depth_along_z_axis' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'depth_along_z_axis' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._depth_along_z_axis = value

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'object_id' field must be an unsigned integer in [0, 4294967295]"
        self._object_id = value
