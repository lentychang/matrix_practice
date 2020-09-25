# matrix_practice
|   | master  | devel  |
|---|---|---|
| Build & Test  | ![CI](https://github.com/lentychang/matrix_practice/workflows/CI/badge.svg?branch=master) | ![CI](https://github.com/lentychang/matrix_practice/workflows/CI/badge.svg?branch=master) |
| Test Coverage  | [![codecov](https://codecov.io/gh/lentychang/matrix_practice/branch/master/graph/badge.svg)](https://codecov.io/gh/lentychang/matrix_practice) | [![codecov](https://codecov.io/gh/lentychang/matrix_practice/branch/devel/graph/badge.svg)](https://codecov.io/gh/lentychang/matrix_practice) |

master:
Practice designing classes for multi-dimensional matrix multiplication with C++11 and newer feature

## Requirements
### Execute requirements
### Build requirements
1. GoogleTest  
  
## Build 
### Method1 Using Conan (Default) 
```
# install conan
python -m pip install conan
mkdir build && cd build

# install dependencies through conan
conan install -s compiler.libcxx=libstdc++11 ..
# cmake configure
cmake -DCMAKE_PROJECT_Matrix_Practice_INCLUDE=build/conan_paths.cmake ..
make 
```

### Method2 Using system package manager
```
sudo apt install libgtest-dev
```

---
## CI Requirements
1. clang-format `sudo apt install clang-format`
2. cmake-format `python3 -m pip install cmake_format`
3. cppcheck: `sudo apt install cppcheck`
4. clang-tidy `sudo apt install clang-tidy`

# Command to run cpp tools
1. cmake-format  
  `find <project root> -name CMakeLists.txt -exec cmake-format -i {} \;`  
2. clang-format  
    If you use clang-format extension in vscode, it will automatically run on save.
3. `compile_commands.json`  
  It can be produced by passing `-DCMAKE_EXPORT_COMPILE_COMMANDS=ON` to cmake
4. cppcheck   
   `cppcheck --project=<path_to compile_command.json> -i<ignore_dir>`
5. clang-tidy  
  `find . -name "*.cpp" | xargs clang-tidy -p <project_dir>/build`
5. lcov
  ```
  cd build && make test && cd ../
  lcov --capture --directory . --output-file coverage.info
  lcov --no-external --remove coverage.info '/usr/*' '*/gtest*' --output-file coverage.info
  ```
  
---
## TODO
1. Write down requirements for basic, advanced Matrix  
2. Write corresponded Test  
3. Add corresponded tests to heap and stack  
4. Implement different matrices on heap and stack  
---
# Reference
- [statslabs/matrix](https://github.com/statslabs/matrix.git)  
- [Programming-_Principles_and_Practice_Using_Cpp](https://github.com/BjarneStroustrup/Programming-_Principles_and_Practice_Using_Cpp.git)  
- [Using CMake for cppcheck and clang-format](https://arcanis.me/en/2015/10/17/cppcheck-and-clang-format)
