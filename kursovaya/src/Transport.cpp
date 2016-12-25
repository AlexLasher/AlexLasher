#include <iostream>
#include "Transport.h"

using namespace std;


    Transport::Transport(){

    }

    Transport::Transport(string s){
        setBrand(s);
    }

    Transport::~Transport()
    {
        //dtor
    }

    void Transport::setPassengers(int val){
        passengers=val;
    }

    int Transport::getPassengers(){
        return passengers;
    }

    void Transport::setBrand(string s){
        brand=s;
    }

    string Transport::getBrand(){
        return brand;
    }

    void Transport::getParameters(){
        introduce();
        cout<<"Количество пассажиров: ";
        cout<<getPassengers()<<endl;
//        cout<<"Марка производителя: ";
//        cout<<getBrand()<<endl;
    }

    void Transport::introduce(){
        cout<<getBrand()<<endl;
    }
