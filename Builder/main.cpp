#include "Carro.h"
#include "Director.h"
#include "cSedan.h"
#include "cL200.h"
#include "cTesla.h"
#include "Director.h"
#include "Builder.h"

#include <iostream>
using namespace std;

int main(){
    Carro* carro;
    Director director;

    cSedan sedan;
    cL200 l200;
    cTesla tesla;

    cout<<"\n---------------------------------Sedan---------------------------------"<<endl;
    director.elegirBuilder(&sedan);
    carro=director.cCarro();
    carro->mostrarCaracteristicas();

    cout<<"\n----------------------------------L200---------------------------------"<<endl;
    director.elegirBuilder(&l200);
    carro=director.cCarro();
    carro->mostrarCaracteristicas();

    cout<<"\n---------------------------------Tesla---------------------------------"<<endl;
    director.elegirBuilder(&tesla);
    carro=director.cCarro();
    carro->mostrarCaracteristicas();

    return 0;
}