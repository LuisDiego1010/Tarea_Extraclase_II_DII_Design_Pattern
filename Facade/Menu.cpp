//
// Created by 2001i on 23/3/2021.
//
#include <string>
#include <iostream>
#include "Menu_Facade.h"

using namespace std;
int main(){
    int a;
    Menu_Facade Menu;
    cout<<"Digite el numero de menu:";
    cin >> a;
    if (a==1){
        cout<<"El menu contiene:"<<endl;
        Menu.menu_1();
        cout<<"pase a caja con su tiquete porfavor";
    } else
    if (a==2){
        cout<<"El menu contiene:"<<endl;
        Menu.menu_2();
        cout<<"pase a caja con su tiquete porfavor";
    }else
    if (a==3){
        cout<<"El menu contiene:"<<endl;
        Menu.menu_3();
        cout<<"pase a caja con su tiquete porfavor";
    }
};
