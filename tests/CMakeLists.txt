find_package(Threads REQUIRED)

### Method for CI Test ###
# This requires cmake newer than 3.11
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.8.0
)

FetchContent_GetProperties(googletest)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
set(BUILD_GTEST ON CACHE BOOL "" FORCE)

if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

FetchContent_MakeAvailable(googletest)

### Method for locally-install gtest library
# find_package(GTest)
# include(GoogleTest)
# And you need to link as GTest::GTest

add_executable(test_matrix_basic_heap test_matrix_basic_heap.cpp)
target_link_libraries(test_matrix_basic_heap PRIVATE gtest)
# This is boundled with cmake-gtest module
# gtest_discover_tests(test_matrix_basic_heap)

add_executable(test_matrix_basic_stack test_matrix_basic_stack.cpp)
target_link_libraries(test_matrix_basic_stack PRIVATE gtest)
# gtest_discover_tests(test_matrix_basic_stack)
