#ifndef LAND_H
#define LAND_H
#include "Transport.h"
#include <iostream>

using namespace std;


class Land:public Transport{
    public:
        Land();
        Land(string);
        ~Land();
        void setWheels(int);
		int getWheels();
		void getParameters();
		void introduce();
    protected:
    private:
        int wheels;
};

#endif // LAND_H
