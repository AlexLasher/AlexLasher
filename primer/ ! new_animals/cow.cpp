# include <iostream>
#include "cow.h"

using namespace std;
//using namespace homeanimals;

namespace cow{

    Cow::Cow() // инициализация элементов-данных
    {
        Herbivores::SetType("корова");
        SetHoof("парное");
    }
    Cow::Cow(string aName, string aHorns) // инициализация элементов-данных
    {
        //cout << "Cow" << endl;
        Herbivores::SetType("корова");
        SetHoof("парное");
        SetName(aName);
        SetHorns(aHorns);
    }
    const string Cow::PrintHorns()
    {
        return "рога - " + Horns;
    }
    const string Cow::GetHorns()
    {
        return Horns;
    }
    void Cow::SetHorns(const string s)
    {
        if ((s=="прямые")||(s=="кривые"))
            Horns = s;
        else
            cout << "рога могут быть \"прямые\" или \"кривые\" " << endl;
    }
    // мои параметры
    void Cow::MySettings()
    {
        Herbivores::MySettings();
        cout << PrintHorns() << endl<< endl;
    }
    void Cow::OutParams(ofstream &fout)
    {
        Herbivores::OutParams(fout);
        fout << GetHorns() << endl;
    }

}
/*
   void Cow::How_make_sounds()
    {
        cout << "как издает звуки - мычит" << endl;
    }*/
