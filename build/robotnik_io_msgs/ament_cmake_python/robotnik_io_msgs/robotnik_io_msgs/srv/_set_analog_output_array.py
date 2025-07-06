# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robotnik_io_msgs:srv/SetAnalogOutputArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetAnalogOutputArray_Request(type):
    """Metaclass of message 'SetAnalogOutputArray_Request'."""

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
            module = import_type_support('robotnik_io_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robotnik_io_msgs.srv.SetAnalogOutputArray_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_analog_output_array__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_analog_output_array__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_analog_output_array__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_analog_output_array__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_analog_output_array__request

            from robotnik_io_msgs.msg import AnalogIO
            if AnalogIO.__class__._TYPE_SUPPORT is None:
                AnalogIO.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetAnalogOutputArray_Request(metaclass=Metaclass_SetAnalogOutputArray_Request):
    """Message class 'SetAnalogOutputArray_Request'."""

    __slots__ = [
        '_output',
    ]

    _fields_and_field_types = {
        'output': 'sequence<robotnik_io_msgs/AnalogIO>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['robotnik_io_msgs', 'msg'], 'AnalogIO')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.output = kwargs.get('output', [])

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
        if self.output != other.output:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def output(self):
        """Message field 'output'."""
        return self._output

    @output.setter
    def output(self, value):
        if __debug__:
            from robotnik_io_msgs.msg import AnalogIO
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
                 all(isinstance(v, AnalogIO) for v in value) and
                 True), \
                "The 'output' field must be a set or sequence and each value of type 'AnalogIO'"
        self._output = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetAnalogOutputArray_Response(type):
    """Metaclass of message 'SetAnalogOutputArray_Response'."""

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
            module = import_type_support('robotnik_io_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robotnik_io_msgs.srv.SetAnalogOutputArray_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_analog_output_array__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_analog_output_array__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_analog_output_array__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_analog_output_array__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_analog_output_array__response

            from robotnik_common_msgs.msg import Response
            if Response.__class__._TYPE_SUPPORT is None:
                Response.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetAnalogOutputArray_Response(metaclass=Metaclass_SetAnalogOutputArray_Response):
    """Message class 'SetAnalogOutputArray_Response'."""

    __slots__ = [
        '_response',
    ]

    _fields_and_field_types = {
        'response': 'robotnik_common_msgs/Response',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['robotnik_common_msgs', 'msg'], 'Response'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from robotnik_common_msgs.msg import Response
        self.response = kwargs.get('response', Response())

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
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            from robotnik_common_msgs.msg import Response
            assert \
                isinstance(value, Response), \
                "The 'response' field must be a sub message of type 'Response'"
        self._response = value


class Metaclass_SetAnalogOutputArray(type):
    """Metaclass of service 'SetAnalogOutputArray'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robotnik_io_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robotnik_io_msgs.srv.SetAnalogOutputArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_analog_output_array

            from robotnik_io_msgs.srv import _set_analog_output_array
            if _set_analog_output_array.Metaclass_SetAnalogOutputArray_Request._TYPE_SUPPORT is None:
                _set_analog_output_array.Metaclass_SetAnalogOutputArray_Request.__import_type_support__()
            if _set_analog_output_array.Metaclass_SetAnalogOutputArray_Response._TYPE_SUPPORT is None:
                _set_analog_output_array.Metaclass_SetAnalogOutputArray_Response.__import_type_support__()


class SetAnalogOutputArray(metaclass=Metaclass_SetAnalogOutputArray):
    from robotnik_io_msgs.srv._set_analog_output_array import SetAnalogOutputArray_Request as Request
    from robotnik_io_msgs.srv._set_analog_output_array import SetAnalogOutputArray_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
