//
// Created by guiso on 25/03/2021.
//

#ifndef TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_CSEDAN_H
#define TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_CSEDAN_H


#include "Builder.h"

class cSedan: public Builder {
public:
    Llantas* obtenerLlantas();
    Motor* obtenerMotor();
    Carroceria* obtenerCarroceria();

};


#endif //TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_CSEDAN_H
