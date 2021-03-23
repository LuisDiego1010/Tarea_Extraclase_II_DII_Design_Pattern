//
// Created by 2001i on 23/3/2021.
//

#ifndef TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_POSTRES_H
#define TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_POSTRES_H


#include "Abstract_comida.h"
#include <string>

using namespace std;
class Postres: public Abstract_comida {
public:
    string galletas();
    string helado();
    string fruta();
};


#endif //TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_POSTRES_H
