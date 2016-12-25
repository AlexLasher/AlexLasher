#include "Submarine.h"

Submarine::Submarine(){
    //ctor
}

Submarine::Submarine(string s){
    setBrand(s);
}

Submarine::~Submarine(){
    //dtor
}

void Submarine::setImmersionDepth(int val){
    immersionDepth=val;
}

int Submarine::getImmersionDepth(){
    return immersionDepth;
}

void Submarine::getParameters(){
    Sea::getParameters();
    cout<<"Глубина погружения: ";
    cout<<getImmersionDepth()<<endl;
}

void Submarine::introduce(){
    cout<<getBrand()<<endl;
}
