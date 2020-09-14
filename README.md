# matrix_practice
Practice designing classes for multi-dimensional matrix multiplication with C++11 and newer feature

## Requirements
1. clang-format `sudo apt install clang-format`
2. cmake-format `python3 -m pip install cmake_format`
3. cppcheck: `sudo apt install cppcheck`
4. GoogleTest `sudo apt install libgtest-dev`  

## TODO
0. Project setup  
    - CI  
1. Write down requirements for basic, advanced Matrix  
2. Write corresponded Test  
3. Add corresponded tests to heap and stack  
4. Implement different matrices on heap and stack  


# Command to run cpp tools
1. cmake-format  
  `find <project root> -name CMakeLists.txt -exec cmake-format -i {} \;`  
2. clang-format  
    If you use clang-format extension in vscode, it will automatically run on save.


# Reference
[statslabs/matrix](https://github.com/statslabs/matrix.git)  
[Programming-_Principles_and_Practice_Using_Cpp](https://github.com/BjarneStroustrup/Programming-_Principles_and_Practice_Using_Cpp.git)
[Using CMake for cppcheck and clang-format](https://arcanis.me/en/2015/10/17/cppcheck-and-clang-format)