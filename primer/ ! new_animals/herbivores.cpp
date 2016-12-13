# include <iostream>
# include <iostream>

#include "herbivores.h"

using namespace std;
using namespace homeanimal;

namespace herbivores{

    Herbivores::Herbivores() // инициализация элементов-данных
    {
        //cout << "Herbivores" << endl;
        HomeAnimal::SetType("травоядное");
        SetFoot("копыто");
    }
    void Herbivores::SetType(const string s)
    {
        if ((s=="корова")||(s=="лошадь"))
            Type = s;
        else
            cout << "животное может быть \"корова\" или \"лошадь\" " << endl;
    }
    void Herbivores::SetHoof(const string s)
    {
        if ((s=="парное")||(s=="непарное"))
            Hoof = s;
        else
            cout << "копыто может быть \"парное\" или \"непарное\" " << endl;
    }
    const string Herbivores::GetType()
    {
        return Type;
    }
    const string Herbivores::GetHoof()
    {
        return Hoof;
    }
    const string Herbivores::PrintType()
    {
        return HomeAnimal::PrintType() + " - " + Type;
    }
    const string Herbivores::PrintHoof()
    {
        return "копыто - " + Hoof;
    }
    // мои параметры
    void Herbivores::MySettings()
    {
        cout << PrintType() << endl;
        cout << PrintName() << endl;
        cout << PrintFoot() << endl;
        cout << PrintHoof() << endl;
    }
    void Herbivores::OutParams(ofstream &fout)
    {
        fout << GetType() << endl;
        fout << GetName() << endl;
    }

}
/*
    void Herbivores::How_is_eating()
    {
        cout << "как ест - долго жует" << endl;
    }
    void Herbivores::How_drinks()
    {
        cout << Rus("как пьет - всасывает воду") << endl;
    }
*/
