#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tracking_msgs::tracking_msgs__rosidl_generator_c" for configuration ""
set_property(TARGET tracking_msgs::tracking_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tracking_msgs::tracking_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtracking_msgs__rosidl_generator_c.so"
  IMPORTED_SONAME_NOCONFIG "libtracking_msgs__rosidl_generator_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tracking_msgs::tracking_msgs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_tracking_msgs::tracking_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libtracking_msgs__rosidl_generator_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
