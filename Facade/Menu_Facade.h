//
// Created by 2001i on 23/3/2021.
//

#ifndef TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_MENU_FACADE_H
#define TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_MENU_FACADE_H


#include "Platillo.h"
#include "Postres.h"
#include "Fresco.h"
#include <string>

using namespace std;
class Menu_Facade {
public:
    Platillo plato=Platillo();
    Postres postre=Postres();
    Fresco fresco=Fresco();
    void menu_1();
    void menu_2();
    void menu_3();
};


#endif //TAREA_EXTRACLASE_II_DII_DESIGN_PATTERN_MENU_FACADE_H
