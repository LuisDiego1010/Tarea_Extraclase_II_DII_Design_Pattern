//
// Created by guiso on 25/03/2021.
//

#include "cTesla.h"

Motor * cTesla::obtenerMotor() {
    Motor* motor=new Motor();
    motor->tipoMotor="electrico";
    return motor;
}

Llantas * cTesla::obtenerLlantas() {
    Llantas* llantas =new Llantas();
    llantas->elegirLLanta("Sonic Carbon Twin Turbine");
    llantas->elegirTamanoNeumatico(15);
    return llantas;
}

Carroceria * cTesla::obtenerCarroceria() {
    Carroceria* carroceria = new Carroceria();
    carroceria->tipoCarroceria="Metal 2 puertas";
    return carroceria;
}