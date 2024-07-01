# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tracking_msgs:msg/TrackedObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackedObstacle(type):
    """Metaclass of message 'TrackedObstacle'."""

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
                'tracking_msgs.msg.TrackedObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracked_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracked_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracked_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracked_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracked_obstacle

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from tracking_msgs.msg import Obstacle
            if Obstacle.__class__._TYPE_SUPPORT is None:
                Obstacle.__class__.__import_type_support__()

            from tracking_msgs.msg import TrackedObstacleState
            if TrackedObstacleState.__class__._TYPE_SUPPORT is None:
                TrackedObstacleState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrackedObstacle(metaclass=Metaclass_TrackedObstacle):
    """Message class 'TrackedObstacle'."""

    __slots__ = [
        '_header',
        '_obstacle',
        '_observation_history',
        '_predicted_states',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'obstacle': 'tracking_msgs/Obstacle',
        'observation_history': 'sequence<tracking_msgs/TrackedObstacleState>',
        'predicted_states': 'sequence<tracking_msgs/TrackedObstacleState>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tracking_msgs', 'msg'], 'Obstacle'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tracking_msgs', 'msg'], 'TrackedObstacleState')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tracking_msgs', 'msg'], 'TrackedObstacleState')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from tracking_msgs.msg import Obstacle
        self.obstacle = kwargs.get('obstacle', Obstacle())
        self.observation_history = kwargs.get('observation_history', [])
        self.predicted_states = kwargs.get('predicted_states', [])

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
        if self.obstacle != other.obstacle:
            return False
        if self.observation_history != other.observation_history:
            return False
        if self.predicted_states != other.predicted_states:
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
    def obstacle(self):
        """Message field 'obstacle'."""
        return self._obstacle

    @obstacle.setter
    def obstacle(self, value):
        if __debug__:
            from tracking_msgs.msg import Obstacle
            assert \
                isinstance(value, Obstacle), \
                "The 'obstacle' field must be a sub message of type 'Obstacle'"
        self._obstacle = value

    @builtins.property
    def observation_history(self):
        """Message field 'observation_history'."""
        return self._observation_history

    @observation_history.setter
    def observation_history(self, value):
        if __debug__:
            from tracking_msgs.msg import TrackedObstacleState
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, TrackedObstacleState) for v in value) and
                 True), \
                "The 'observation_history' field must be a set or sequence and each value of type 'TrackedObstacleState'"
        self._observation_history = value

    @builtins.property
    def predicted_states(self):
        """Message field 'predicted_states'."""
        return self._predicted_states

    @predicted_states.setter
    def predicted_states(self, value):
        if __debug__:
            from tracking_msgs.msg import TrackedObstacleState
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, TrackedObstacleState) for v in value) and
                 True), \
                "The 'predicted_states' field must be a set or sequence and each value of type 'TrackedObstacleState'"
        self._predicted_states = value
