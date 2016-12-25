#include "Rail.h"

Rail::Rail(){
    //ctor
}

Rail::Rail(string s){
    setBrand(s);
}

Rail::~Rail(){
    //dtor
}

void Rail::setRailCanvasWidth(int val){
    railCanvasWidth=val;
}

int Rail::getRailCanvasWidth(){
    return railCanvasWidth;
}

void Rail::getParameters(){
    Land::getParameters();
    cout<<"Ўирина рельсового полотна: ";
    cout<<getRailCanvasWidth()<<endl;
}

void Rail::introduce(){
    cout<<getBrand()<<endl;
}
