//
// Created by guiso on 25/03/2021.
//

#include "Carro.h"
#include <iostream>
using namespace std;
void Carro::mostrarCaracteristicas() {
    cout<<"La carroceria del auto es del tipo: "<<carrociceria->tipoCarroceria<<endl;
    cout<<"Las llantas del carro son " <<llantas->tipoLlanta<<" y el tamaño del neomático es de: "<<llantas->tamanoNeumatico<<endl;
    cout<<"El motor del auto es " <<motor->tipoMotor<<endl;
};