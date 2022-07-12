# 0.) Create Code and Cmake File
# 1.) mkdir build
# 2.) cd build
# 3.) cmake .. # configure cmake
# 4.) cmake --build . # build the project
# 5.) ./Executable # calls the executable file generated

cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS       OFF)

set(LIBRARY_NAME       Library)
set(EXECUTABLE_NAME Executable)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)

add_git_submodule(external/json)

add_subdirectory(configured)
add_subdirectory(src)
add_subdirectory(app)
