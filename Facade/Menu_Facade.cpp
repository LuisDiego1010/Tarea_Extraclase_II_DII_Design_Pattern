//
// Created by 2001i on 23/3/2021.
//

#include "Menu_Facade.h"
#include <string>
#include <iostream>
using namespace std;

void Menu_Facade::menu_1() {
    cout << "Plato principal:"<<plato.cantones()<<endl;
    cout << "Fresco:"<<fresco.Chan()<<endl;
    cout << "Postre:"<<postre.galletas()<<endl;
    cout << "Precio:"<< plato.get_price()+fresco.get_price()+postre.get_price()<<endl;
}

void Menu_Facade::menu_2() {
    cout << "Plato principal:"<<plato.chuleta()<<endl;
    cout << "Fresco:"<<fresco.Cas()<<endl;
    cout << "Postre:"<<postre.fruta()<<endl;
    cout << "Precio:"<< plato.get_price()+fresco.get_price()+postre.get_price()<<endl;
}

void Menu_Facade::menu_3() {
    cout << "Plato principal:"<<plato.fajitas()<<endl;
    cout << "Fresco:"<<fresco.CocaCola()<<endl;
    cout << "Postre:"<<postre.helado()<<endl;
    cout << "Precio:"<< plato.get_price()+fresco.get_price()+postre.get_price()<<endl;
}
