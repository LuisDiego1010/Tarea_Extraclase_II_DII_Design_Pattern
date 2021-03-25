//
// Created by guiso on 25/03/2021.
//

#ifndef TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_CARRO_H
#define TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_CARRO_H \

#include "Motor.h"
#include "Llantas.h"
#include "Carroceria.h"

class Carro {
public:
    Llantas* llantas;
    Motor* motor;
    Carroceria* carrociceria;
    void mostrarCaracteristicas();
};


#endif //TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_CARRO_H
