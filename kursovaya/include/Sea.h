#ifndef SEA_H
#define SEA_H
#include "Transport.h"

class Sea:public Transport{
    public:
        Sea();
        virtual ~Sea();
        void setDisplacement(int vol){
			displacement=vol;
		}
		int getDisplacement(){
			return displacement;
		}
        void getParameters(){
            cout<<"Количество пассажиров: ";
            cout<<getPassengers()<<endl;
            cout<<"Объем водоизмещения: ";
            cout<<getDisplacement()<<endl;
            cout<<"Марка производителя: ";
            cout<<getBrand()<<endl;
        }

    protected:

    private:
        int displacement;
};

#endif // SEA_H
