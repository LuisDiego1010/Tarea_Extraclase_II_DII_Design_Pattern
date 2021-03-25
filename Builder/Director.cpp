//
// Created by guiso on 25/03/2021.
//

#include "Director.h"
#include "Carro.h"

void Director::elegirBuilder(Builder* nuevoBuilder) {
    builder=nuevoBuilder;
}
Carro* Director::cCarro() {
    Carro* carro=new Carro();
    carro->carrociceria = builder->obtenerCarroceria();
    carro->llantas=builder->obtenerLlantas();
    carro->motor=builder->obtenerMotor();
    return carro;
}