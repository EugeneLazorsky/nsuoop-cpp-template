
cmake_minimum_required(VERSION 3.14)

project(nsuoop-cpp-template)

set(CMAKE_CXX_STANDARD 17)
set(exe_name ${PROJECT_NAME})
set(test_name test)

add_library(mainlib OBJECT task1.cpp task2.cpp)

add_executable(${exe_name} main.cpp)
target_link_libraries(${exe_name} mainlib)

# ============== enabling GoogleTest ==============

include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/58d77fa8070e8cec2dc1ed015d66b454c8d78850.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(${test_name} task_test.cpp)
target_link_libraries(${test_name} gtest_main)
target_link_libraries(${test_name} mainlib)

add_test(NAME ${test_name} COMMAND ${test_name})
