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
            cout<<"�������� ��������: ";
            cout<<getClearance()<<endl;
        }
        void introduce(){
		    cout<<"� - ������!!!"<<endl;
		}
    protected:
    private:
        int clearance;
};

#endif // ROAD_H
