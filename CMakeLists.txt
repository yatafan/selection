cmake_minimum_required(VERSION 3.5)

project(selection)

set(INC include)

set(SRC src)

add_executable(selection main.cpp ${INC} ${SRC})
