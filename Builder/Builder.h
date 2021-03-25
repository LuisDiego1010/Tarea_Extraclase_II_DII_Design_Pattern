//
// Created by guiso on 25/03/2021.
//

#ifndef TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_BUILDER_H
#define TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_BUILDER_H


#include "Llantas.h"
#include "Motor.h"
#include "Carroceria.h"

class Builder {
public:
    virtual Llantas* obtenerLlantas() = 0;
    virtual Motor* obtenerMotor() = 0;
    virtual Carroceria* obtenerCarroceria()= 0;
};


#endif //TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_BUILDER_H
