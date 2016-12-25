#include "Land.h"

using namespace std;

Land::Land(){

}

Land::Land(string s){
    setBrand(s);
}

Land::~Land(){

}

void Land::setWheels(int val){
    wheels=val;
}

int Land::getWheels(){
    return wheels;
}

void Land::getParameters(){
    Transport::getParameters();
    cout<<"Количество колес: ";
    cout<<getWheels()<<endl;
}

void Land::introduce(){
    cout<<getBrand()<<endl;
}
