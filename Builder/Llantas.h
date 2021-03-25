//
// Created by guiso on 24/03/2021.
//

#ifndef TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_LLANTAS_H
#define TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_LLANTAS_H

#include <iostream>
using namespace std;

class Llantas {
public:
    int tamanoNeumatico;
    string tipoLlanta;
    int elegirTamanoNeumatico(int tamano);
    string elegirLLanta(string llanta);
};


#endif //TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_LLANTAS_H
