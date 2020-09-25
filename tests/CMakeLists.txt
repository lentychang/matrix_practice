find_package(Threads REQUIRED)

add_executable(test_matrix_basic_heap test_matrix_basic_heap.cpp)
if(NOT MSVC)
  target_compile_options(test_matrix_basic_heap PUBLIC -Wall -pedantic)
endif(NOT MSVC)
target_link_libraries(
  test_matrix_basic_heap
  PUBLIC coverage_config
  PRIVATE gtest)
add_test(test_matrix_basic_heap test_matrix_basic_heap)

add_executable(test_matrix_basic_stack test_matrix_basic_stack.cpp)
if(NOT MSVC)
  target_compile_options(test_matrix_basic_stack PUBLIC -Wall -pedantic)
endif(NOT MSVC)
target_link_libraries(
  test_matrix_basic_stack
  PUBLIC coverage_config
  PRIVATE gtest)
add_test(test_matrix_basic_stack test_matrix_basic_stack)
