cmake_minimum_required(VERSION 3.6)
project(DOM_Tree)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp DomTreeNode.cpp DomTreeNode.h)
add_executable(DOM_Tree ${SOURCE_FILES})