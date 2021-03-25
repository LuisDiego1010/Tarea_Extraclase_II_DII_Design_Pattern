//
// Created by guiso on 25/03/2021.
//

#ifndef TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_DIRECTOR_H
#define TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_DIRECTOR_H


#include "Carro.h"
#include "Builder.h"

class Director {
public:
    Builder* builder;
    void elegirBuilder(Builder* nuevoBuilder);
    Carro* cCarro();
};


#endif //TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_DIRECTOR_H
