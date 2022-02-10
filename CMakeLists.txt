cmake_minimum_required(VERSION 3.21)
project(Bridge)

set(CMAKE_CXX_STANDARD 14)

add_executable(Bridge main.cpp modules/shape/Shape.cpp modules/shape/Shape.h modules/drawing/Drawing.cpp modules/drawing/Drawing.h modules/drawing/CS1Drawing.cpp modules/drawing/CS1Drawing.h modules/drawing/CS2Drawing.cpp modules/drawing/CS2Drawing.h modules/cs/CS1.cpp modules/cs/CS1.h modules/cs/CS2.cpp modules/cs/CS2.h modules/shape/Rectangle.cpp modules/shape/Rectangle.h modules/shape/Circle.cpp modules/shape/Circle.h)
