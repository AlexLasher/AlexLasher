#ifndef LAND_H
#define LAND_H
#include "Transport.h"
#include <iostream>
using namespace std;

class Land:public Transport{
    public:
        Land();
        ~Land();
        void setWheels(int vol){
			wheels=vol;
		}
		int getWheels(){
			return wheels;
		}
		void getParameters(){
		    cout<<"Количество пассажиров: ";
		    cout<<getPassengers()<<endl;
		    cout<<"Количество колес: ";
		    cout<<getWheels()<<endl;
		    cout<<"Марка производителя: ";
		    cout<<getBrand()<<endl;
		}
    protected:

    private:
        int wheels;
};

#endif // LAND_H
