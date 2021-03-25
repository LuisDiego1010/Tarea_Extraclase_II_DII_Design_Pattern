//
// Created by guiso on 25/03/2021.
//

#include "cSedan.h"
Motor * cSedan::obtenerMotor() {
    Motor* motor=new Motor();
    motor->tipoMotor="Combustión";
    return motor;
}

Llantas * cSedan::obtenerLlantas() {
    Llantas* llantas =new Llantas();
    llantas->elegirLLanta("Destructor");
    llantas->elegirTamanoNeumatico(15);
    return llantas;
}

Carroceria * cSedan::obtenerCarroceria() {
    Carroceria* carroceria = new Carroceria();
    carroceria->tipoCarroceria="Metal 2 puertas";
    return carroceria;
}