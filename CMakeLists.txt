cmake_minimum_required(VERSION 3.16)
project(my_project)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/poppler")

# Poppler
find_package(Poppler REQUIRED)
include_directories(${Poppler_INCLUDE_DIRS})

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  runTests
  ./src/test.cpp
  ./src/grader.cpp
  ./include/grader.h
  ./src/student.cpp
  ./src/standard.cpp
)

add_executable(
  runGrader
  ./src/grader.cpp
  ./src/main.cpp
  ./src/student.cpp
  ./src/standard.cpp
)

set(TEST_FILE_1 "ADRIANO T ALFORQUE NSCAS Growth Winter 2023 Grade 8.pdf")

# Copy Test files to build directory
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/test_files/${TEST_FILE_1}
	DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/test_files/)

target_link_libraries(
  runTests
  ${Poppler_LIBRARIES}
  GTest::gtest_main
)

target_link_libraries(
  runGrader
  ${Poppler_LIBRARIES}
)


include(GoogleTest)
gtest_discover_tests(runTests)
