//
// Created by 2001i on 23/3/2021.
//

#ifndef TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_PLATILLO_H
#define TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_PLATILLO_H


#include "Abstract_comida.h"
#include <string>

using namespace std;

class Platillo: public Abstract_comida {
public:
    string cantones();
    string fajitas();
    string chuleta();
};


#endif //TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_PLATILLO_H
