cmake_minimum_required (VERSION 3.20.2)

project (CMakeFiguresDLL)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set (SOURCESDLL
Equilateral_triangle.cpp
Figure.cpp
Isosceles_triangle.cpp
Parallelogram.cpp
Quadrilateral.cpp
Rectangl.cpp
Rhombus.cpp
Right_triangle.cpp
Square.cpp
Triangle.cpp)

set (HEADERSDLL
Figure.h
Equilateral_triangle.h
Isosceles_triangle.h
Parallelogram.h
Quadrilateral.h
Rectangl.h
Rhombus.h
Right_triangle.h
Square.h
Triangle.h
Error.h
)
add_library(FiguresDynamicLib SHARED ${HEADERSDLL} ${SOURCESDLL})
add_executable (CMakeFigures main.cpp)
target_link_libraries(CMakeFigures FiguresDynamicLib)