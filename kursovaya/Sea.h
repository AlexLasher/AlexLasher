#ifndef SEA_H
#define SEA_H
#include "Transport.h"
#include <iostream>

using namespace std;

class Sea:public Transport{
	public:
        Sea();
        ~Sea();
		void setDisplacement(int vol){
			displacement=vol;
		}
		int getDisplacement(){
			return displacement;
		}
		void getParameters(){
			Transport::getParameters();
			cout<< "����� �������������: ";
			cout<< getDisplacement() << endl;
		}
		void introduce(){
		    cout<<"� - ������� ���������!!!"<<endl;
		}
    protected:
	private:
		int displacement;
};

#endif // SEA_H
