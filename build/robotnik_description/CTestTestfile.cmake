# CMake generated Testfile for 
# Source directory: /home/admin/ros2_ws/src/robotnik_description
# Build directory: /home/admin/ros2_ws/build/robotnik_description
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(urdf_xacro "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/admin/ros2_ws/build/robotnik_description/test_results/robotnik_description/urdf_xacro.xunit.xml" "--package-name" "robotnik_description" "--output-file" "/home/admin/ros2_ws/build/robotnik_description/ament_cmake_pytest/urdf_xacro.txt" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/home/admin/ros2_ws/src/robotnik_description/test/test_xacro.py" "-o" "cache_dir=/home/admin/ros2_ws/build/robotnik_description/ament_cmake_pytest/urdf_xacro/.cache" "--junit-xml=/home/admin/ros2_ws/build/robotnik_description/test_results/robotnik_description/urdf_xacro.xunit.xml" "--junit-prefix=robotnik_description")
set_tests_properties(urdf_xacro PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/home/admin/ros2_ws/build/robotnik_description" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;169;ament_add_test;/home/admin/ros2_ws/src/robotnik_description/CMakeLists.txt;15;ament_add_pytest_test;/home/admin/ros2_ws/src/robotnik_description/CMakeLists.txt;0;")
