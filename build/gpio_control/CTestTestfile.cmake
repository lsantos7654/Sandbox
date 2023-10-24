# CMake generated Testfile for 
# Source directory: /home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control
# Build directory: /home/lsantos/GitHub/Sandbox/build/gpio_control
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/lsantos/GitHub/Sandbox/build/gpio_control/test_results/gpio_control/cppcheck.xunit.xml" "--package-name" "gpio_control" "--output-file" "/home/lsantos/GitHub/Sandbox/build/gpio_control/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/iron/bin/ament_cppcheck" "--xunit-file" "/home/lsantos/GitHub/Sandbox/build/gpio_control/test_results/gpio_control/cppcheck.xunit.xml")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/iron/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/opt/ros/iron/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control/CMakeLists.txt;39;ament_package;/home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/lsantos/GitHub/Sandbox/build/gpio_control/test_results/gpio_control/lint_cmake.xunit.xml" "--package-name" "gpio_control" "--output-file" "/home/lsantos/GitHub/Sandbox/build/gpio_control/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/iron/bin/ament_lint_cmake" "--xunit-file" "/home/lsantos/GitHub/Sandbox/build/gpio_control/test_results/gpio_control/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/iron/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/iron/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control/CMakeLists.txt;39;ament_package;/home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/lsantos/GitHub/Sandbox/build/gpio_control/test_results/gpio_control/uncrustify.xunit.xml" "--package-name" "gpio_control" "--output-file" "/home/lsantos/GitHub/Sandbox/build/gpio_control/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/iron/bin/ament_uncrustify" "--xunit-file" "/home/lsantos/GitHub/Sandbox/build/gpio_control/test_results/gpio_control/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;70;ament_add_test;/opt/ros/iron/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;43;ament_uncrustify;/opt/ros/iron/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control/CMakeLists.txt;39;ament_package;/home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/lsantos/GitHub/Sandbox/build/gpio_control/test_results/gpio_control/xmllint.xunit.xml" "--package-name" "gpio_control" "--output-file" "/home/lsantos/GitHub/Sandbox/build/gpio_control/ament_xmllint/xmllint.txt" "--command" "/opt/ros/iron/bin/ament_xmllint" "--xunit-file" "/home/lsantos/GitHub/Sandbox/build/gpio_control/test_results/gpio_control/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/iron/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/iron/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control/CMakeLists.txt;39;ament_package;/home/lsantos/GitHub/Sandbox/RPI_led/src/gpio_control/CMakeLists.txt;0;")