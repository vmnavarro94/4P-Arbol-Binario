cmake_minimum_required(VERSION 3.27)
project(Arbol_Binario)

set(CMAKE_CXX_STANDARD 17)

add_executable(Arbol_Binario main.cpp
        Tree/Tree.cpp
        Tree/Tree.h)
