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
        Facade/Platillo.h Facade/Postres.cpp Facade/Postres.h Facade/Abstract_comida.cpp Facade/Abstract_comida.h Builder/Llantas.cpp Builder/Llantas.h Builder/Motor.cpp Builder/Motor.h Builder/Carroceria.cpp Builder/Carroceria.h Builder/Carro.cpp Builder/Carro.h Builder/Builder.h Builder/Director.cpp Builder/Director.h Builder/cSedan.cpp Builder/cSedan.h Builder/cL200.cpp Builder/cL200.h Builder/cTesla.cpp Builder/cTesla.h Builder/main.cpp)
