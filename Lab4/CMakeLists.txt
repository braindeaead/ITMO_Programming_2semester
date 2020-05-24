cmake_minimum_required(VERSION 3.15)
project(Lab4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab4 main.cpp Hexagon.cpp Commands.cpp Commands.h Hexagon.h Section.cpp Section.h BaseCObject.h CVector2D.h IDialogInitiable.h IGeoFig.h IPhysObject.h IPrintable.h United.h)