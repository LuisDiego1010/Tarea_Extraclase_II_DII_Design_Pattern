//
// Created by guiso on 25/03/2021.
//

#include "cL200.h"

Motor * cL200::obtenerMotor() {
    Motor* motor=new Motor();
    motor->tipoMotor="Híbrido";
    return motor;
}

Llantas * cL200::obtenerLlantas() {
    Llantas* llantas =new Llantas();
    llantas->tipoLlanta="Todo terreno";
    llantas->elegirTamanoNeumatico(20);

    return llantas;
}

Carroceria * cL200::obtenerCarroceria() {
    Carroceria* carroceria = new Carroceria();
    carroceria->tipoCarroceria="Metal 4 puertas";
    return carroceria;
}