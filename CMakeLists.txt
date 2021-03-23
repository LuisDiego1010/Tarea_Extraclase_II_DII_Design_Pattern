cmake_minimum_required(VERSION 3.17)
project(Tarea_Extraclase_II_DII_Design_Pattern)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Tarea_Extraclase_II_DII_Design_Pattern
        Facade/Fresco.cpp
        Facade/Fresco.h
        Facade/Menu_Facade.cpp
        Facade/Menu_Facade.h
        Facade/Platillo.cpp
        Facade/Platillo.h Facade/Postres.cpp Facade/Postres.h Facade/Abstract_comida.cpp Facade/Abstract_comida.h Facade/Menu.cpp)
