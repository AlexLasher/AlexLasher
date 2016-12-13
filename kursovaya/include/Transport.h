#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <iostream>
using namespace std;

class Transport
{
    public:
        Transport();
        ~Transport();
        void setPassengers(int vol){
			passengers=vol;
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
		    cout<<"Количество пассажиров: ";
		    cout<<getPassengers()<<endl;
		    cout<<"Марка производителя: ";
		    cout<<getBrand()<<endl;
		}
    protected:

    private:
        int passengers;
        string brand;
};

#endif // TRANSPORT_H
