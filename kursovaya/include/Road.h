#ifndef ROAD_H
#define ROAD_H
#include "Land.h"
#include <iostream>

using namespace std;

class Road:public Land{
    public:
        Road();
        ~Road();
        void setClearance(int val){
            clearance=val;
        }
        int getClearance(){
            return clearance;
        }
        void getParameters(){
            Land::getParameters();
            cout<<"Значение клиренса: ";
            cout<<getClearance()<<endl;
        }
        void introduce(){
		    cout<<"я - машина!!!"<<endl;
		}
    protected:
    private:
        int clearance;
};

#endif // ROAD_H
