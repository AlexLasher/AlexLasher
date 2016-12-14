#ifndef RAIL_H
#define RAIL_H
#include "Land.h"
#include <iostream>

using namespace std;

class Rail:public Land{
    public:
        Rail();
        ~Rail();
        void setRailCanvasWidth(int val){
			railCanvasWidth=val;
		}
		int getRailCanvasWidth(){
			return railCanvasWidth;
		}
		void getParameters(){
		    Land::getParameters();
		    cout<<"������ ���������� �������: ";
		    cout<<getRailCanvasWidth()<<endl;
		}
		void introduce(){
		    cout<<"� - �����!!!"<<endl;
		}
    protected:
    private:
        int railCanvasWidth;
};

#endif // RAIL_H
