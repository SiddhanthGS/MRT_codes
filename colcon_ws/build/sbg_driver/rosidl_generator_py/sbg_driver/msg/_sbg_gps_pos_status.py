# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgGpsPosStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgGpsPosStatus(type):
    """Metaclass of message 'SbgGpsPosStatus'."""

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
            module = import_type_support('sbg_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sbg_driver.msg.SbgGpsPosStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_gps_pos_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_gps_pos_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_gps_pos_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_gps_pos_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_gps_pos_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgGpsPosStatus(metaclass=Metaclass_SbgGpsPosStatus):
    """Message class 'SbgGpsPosStatus'."""

    __slots__ = [
        '_status',
        '_type',
        '_gps_l1_used',
        '_gps_l2_used',
        '_gps_l5_used',
        '_glo_l1_used',
        '_glo_l2_used',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
        'type': 'uint8',
        'gps_l1_used': 'boolean',
        'gps_l2_used': 'boolean',
        'gps_l5_used': 'boolean',
        'glo_l1_used': 'boolean',
        'glo_l2_used': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        self.type = kwargs.get('type', int())
        self.gps_l1_used = kwargs.get('gps_l1_used', bool())
        self.gps_l2_used = kwargs.get('gps_l2_used', bool())
        self.gps_l5_used = kwargs.get('gps_l5_used', bool())
        self.glo_l1_used = kwargs.get('glo_l1_used', bool())
        self.glo_l2_used = kwargs.get('glo_l2_used', bool())

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
        if self.status != other.status:
            return False
        if self.type != other.type:
            return False
        if self.gps_l1_used != other.gps_l1_used:
            return False
        if self.gps_l2_used != other.gps_l2_used:
            return False
        if self.gps_l5_used != other.gps_l5_used:
            return False
        if self.glo_l1_used != other.glo_l1_used:
            return False
        if self.glo_l2_used != other.glo_l2_used:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def gps_l1_used(self):
        """Message field 'gps_l1_used'."""
        return self._gps_l1_used

    @gps_l1_used.setter
    def gps_l1_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_l1_used' field must be of type 'bool'"
        self._gps_l1_used = value

    @builtins.property
    def gps_l2_used(self):
        """Message field 'gps_l2_used'."""
        return self._gps_l2_used

    @gps_l2_used.setter
    def gps_l2_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_l2_used' field must be of type 'bool'"
        self._gps_l2_used = value

    @builtins.property
    def gps_l5_used(self):
        """Message field 'gps_l5_used'."""
        return self._gps_l5_used

    @gps_l5_used.setter
    def gps_l5_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_l5_used' field must be of type 'bool'"
        self._gps_l5_used = value

    @builtins.property
    def glo_l1_used(self):
        """Message field 'glo_l1_used'."""
        return self._glo_l1_used

    @glo_l1_used.setter
    def glo_l1_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'glo_l1_used' field must be of type 'bool'"
        self._glo_l1_used = value

    @builtins.property
    def glo_l2_used(self):
        """Message field 'glo_l2_used'."""
        return self._glo_l2_used

    @glo_l2_used.setter
    def glo_l2_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'glo_l2_used' field must be of type 'bool'"
        self._glo_l2_used = value
