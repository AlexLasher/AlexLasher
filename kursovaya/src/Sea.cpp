#include "Sea.h"

Sea::Sea(){

}

Sea::Sea(string s){
    setBrand(s);
}

Sea::~Sea(){

}

void Sea::setDisplacement(int vol){
    displacement=vol;
}

int Sea::getDisplacement(){
    return displacement;
}

void Sea::getParameters(){
    Transport::getParameters();
    cout<<"Объем водоизмещения: ";
    cout<<getDisplacement()<<endl;
}

void Sea::introduce(){
    cout<<getBrand()<<endl;
}
