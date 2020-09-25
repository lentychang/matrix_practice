cmake_minimum_required(VERSION 3.15.1)
project(Matrix_Practice CXX)
enable_testing()
set(CMAKE_CXX_STANDARD 17)

# ######### Code Coverage ##########
option(CODE_COVERAGE "Enable coverage reporting" ON)
add_library(coverage_config INTERFACE)

if(CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  # Add required flags (GCC & LLVM/Clang)
  target_compile_options(
    coverage_config
    INTERFACE -O0 # no optimization
              -g # generate debug info
              --coverage # sets all required flags
  )
  if(CMAKE_VERSION VERSION_GREATER_EQUAL 3.13)
    target_link_options(coverage_config INTERFACE --coverage)
  else()
    target_link_libraries(coverage_config INTERFACE --coverage)
  endif()
endif(CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
# ##############################################################################

add_subdirectory(src)
add_subdirectory(tests)
