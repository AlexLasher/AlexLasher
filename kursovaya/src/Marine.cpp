#include "Marine.h"

Marine::Marine()
{
    //ctor
}

Marine::Marine(string s){
    setBrand(s);
}

Marine::~Marine()
{
    //dtor
}

void Marine::setDeckSqare(int val){
    deckSqare=val;
}

int Marine::getDeckSqare(){
    return deckSqare;
}

void Marine::getParameters(){
    Sea::getParameters();
    cout<<"Площадь палубы: ";
    cout<<getDeckSqare()<<endl;
}

void Marine::introduce(){
    cout<<getBrand()<<endl;
}
