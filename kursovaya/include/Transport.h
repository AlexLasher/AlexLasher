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
		    cout<<"Количество пассажиров: ";
		    cout<<getPassengers()<<endl;
		    cout<<"Марка производителя: ";
		    cout<<getBrand()<<endl;
		}
		virtual void introduce(){
		    cout<<"Я - транспорт!!!"<<endl;
		}
    protected:

    private:
        int passengers;
        string brand;
};

#endif // TRANSPORT_H
