#ifndef MARINE_H
#define MARINE_H
#include "Sea.h"
#include <iostream>

using namespace std;

class Marine:public Sea{
    public:
        Marine();
        ~Marine();
        void setDeckSqare(int val){
            deckSqare=val;
        }
        int getDeckSqare(){
            return deckSqare;
        }
        void getParameters(){
            Sea::getParameters();
            cout<<"������� ������: ";
            cout<<getDeckSqare()<<endl;
        }
        void introduce(){
		    cout<<"� - �������!!!"<<endl;
		}
    protected:
    private:
        int deckSqare;
};
#endif // MARINE_H
