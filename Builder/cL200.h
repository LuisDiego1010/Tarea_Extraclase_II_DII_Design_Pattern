//
// Created by guiso on 25/03/2021.
//

#ifndef TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_CL200_H
#define TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_CL200_H


#include "Llantas.h"
#include "Motor.h"
#include "Carroceria.h"
#include "Builder.h"

class cL200: public Builder {
public:
    Llantas* obtenerLlantas();
    Motor* obtenerMotor();
    Carroceria* obtenerCarroceria();
};


#endif //TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_CL200_H
