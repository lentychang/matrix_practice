cmake_minimum_required(VERSION 3.15.1)
project(Matrix_Practice CXX)
enable_testing()
set(CMAKE_CXX_STANDARD 17)

find_program(CMAKE_CXX_CPPCHECK NAMES cppcheck)
if(CMAKE_CXX_CPPCHECK)
  list(APPEND CMAKE_CXX_CPPCHECK "--enable=warning" "--inconclusive" "--force"
       "--inline-suppr")
else()
  message(WARNING "Cppcheck not found, disable cppcheck function")
  unset(CMAKE_CXX_CPPCHECK CACHE)
endif()

# set(CMAKE_CXX_CLANG_TIDY "clang-tidy;-checks=*")

add_subdirectory(src)
add_subdirectory(tests)
