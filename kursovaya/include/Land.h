#ifndef LAND_H
#define LAND_H
#include "Transport.h"
#include <iostream>

using namespace std;

class Land:public Transport{
    public:
        Land();
        ~Land();
        void setWheels(int val){
			wheels=val;
		}
		int getWheels(){
			return wheels;
		}
		void getParameters(){
		    Transport::getParameters();
		    cout<<" оличество колес: ";
		    cout<<getWheels()<<endl;
		}
		void introduce(){
		    cout<<"я - наземный транспорт!!!"<<endl;
		}
    protected:

    private:
        int wheels;
};

#endif // LAND_H
