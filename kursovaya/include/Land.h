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
		    cout<<"���������� ����������: ";
		    cout<<getPassengers()<<endl;
		    cout<<"���������� �����: ";
		    cout<<getWheels()<<endl;
		    cout<<"����� �������������: ";
		    cout<<getBrand()<<endl;
		}
    protected:

    private:
        int wheels;
};

#endif // LAND_H
