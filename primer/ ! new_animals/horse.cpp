# include <iostream>
#include "horse.h"

using namespace std;
//using namespace homeanimals;

namespace horse{

    Horse::Horse() // инициализация элементов-данных
    {
        SetType("лошадь");
        SetHoof("непарное");
    }
    Horse::Horse(string aName, string aHorseshoe) // инициализация элементов-данных
    {
        SetType("лошадь");
        SetHoof("непарное");
        SetName(aName);
        SetHorseshoe(aHorseshoe);
    }
    const string Horse::GetHorseshoe()
    {
        return "подковы - " + Horseshoe;
    }
    void Horse::SetHorseshoe(const string s)
    {
        if ((s=="пластиковые")||(s=="алюминиевые"))
            Horseshoe = s;
        else
            cout << "подкова может быть \"пластиковые\" или \"алюминиевые\" " << endl;
    }
    // мои параметры
    void Horse::MySettings()
    {
        Herbivores::MySettings();
        cout << GetHorseshoe() << endl<< endl;
    }

}
/*
    void Horse::How_make_sounds()
    {
        cout << "как издает звуки - ржёт" << endl;
    }*/
