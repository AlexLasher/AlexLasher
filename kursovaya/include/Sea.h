#ifndef SEA_H
#define SEA_H
#include "Transport.h"



class Sea:public Transport{
    public:
        Sea();
        Sea(string);
        ~Sea();
        void setDisplacement(int);
		int getDisplacement();
        void getParameters();
        void introduce();
    protected:
    private:
        int displacement;
};

#endif // SEA_H
