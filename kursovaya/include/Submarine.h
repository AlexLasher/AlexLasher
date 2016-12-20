#ifndef SUBMARINE_H
#define SUBMARINE_H
#include "Sea.h"
#include <iostream>

using namespace std;

class Submarine:public Sea{
    public:
        Submarine();
        ~Submarine();
        void setImmersionDepth(int val){
            immersionDepth=val;
        }
        int getImmersionDepth(){
            return immersionDepth;
        }
        void getParameters(){
            Sea::getParameters();
            cout<<"Глубина погружения: ";
            cout<<getImmersionDepth()<<endl;
        }
        void introduce(){
		    cout<<"Я - подводная лодка!!!"<<endl;
		}
    protected:
    private:
        int immersionDepth;
};

#endif // SUBMARINE_H
