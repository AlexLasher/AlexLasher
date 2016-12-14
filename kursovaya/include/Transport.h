#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <iostream>
using namespace std;

class Transport
{
    public:
        Transport();
        ~Transport();
        void setPassengers(int val){
			passengers=val;
		}
		int getPassengers(){
			return passengers;
		}
		void setBrand(string s){
			brand=s;
		}
		string getBrand(){
			return brand;
		}
		virtual void getParameters(){
		    introduce();
		    cout<<"���������� ����������: ";
		    cout<<getPassengers()<<endl;
		    cout<<"����� �������������: ";
		    cout<<getBrand()<<endl;
		}
		virtual void introduce(){
		    cout<<"� - ���������!!!"<<endl;
		}
    protected:

    private:
        int passengers;
        string brand;
};

#endif // TRANSPORT_H
