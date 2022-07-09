# 0.) Create Code and Cmake File
# 1.) mkdir build
# 2.) cd build
# 3.) cmake .. # configure cmake
# 4.) cmake --build . # build the project
# 5.) ./Executable # calls the executable file generated
# 6.)
cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

add_subdirectory(src)
add_subdirectory(app)

