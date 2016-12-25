#include "Road.h"

Road::Road(){
    //ctor
}

Road::Road(string s){
    setBrand(s);
}

Road::~Road(){
    //dtor
}

void Road::setClearance(int val){
    clearance=val;
}

int Road::getClearance(){
    return clearance;
}

void Road::getParameters(){
    Land::getParameters();
    cout<<"Значение клиренса: ";
    cout<<getClearance()<<endl;
}

void Road::introduce(){
    cout<<getBrand()<<endl;
}
