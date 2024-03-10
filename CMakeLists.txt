cmake_minimum_required(VERSION 3.28)

project(selection)

set(INC include)

set(SRC src)

add_executable(selection main.cpp ${INC} ${SRC})

set_target_properties(selection PROPERTIES
	CXX_STANDART 20
	CXX_STANDART_REQUIRED YES
)
