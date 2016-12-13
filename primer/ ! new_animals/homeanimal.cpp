#include <iostream>
#include "homeanimal.h"

using namespace std;

namespace homeanimal{

    HomeAnimal::HomeAnimal() // инициализация элементов-данных
    {
        //cout << "HomeAnimal" << endl;
        Type = "";
        Foot = "";
        Name = " без имени ";
    }
    void HomeAnimal::SetType(const string s)
    {
        if ((s=="травоядное")||(s=="хищное"))
            Type = s;
        else
            cout << "животное может быть \"травоядное\" или \"хищное\" " << endl;
    }
    void HomeAnimal::SetFoot(const string s)
    {
        if ((s=="копыто")||(s=="лапа"))
            Foot = s;
        else
            cout << "стопа может быть \"копыто\" или \"лапа\" " << endl;
    }
    void HomeAnimal::SetName(const string s)
    {
        Name = s;
    }
    const string HomeAnimal::GetType()
    {
        return Type;
    }
    const string HomeAnimal::GetFoot()
    {
        return Foot;
    }
    const string HomeAnimal::GetName()
    {
        return Name;
    }
    const string HomeAnimal::PrintType()
    {
        return "домашнее животное - " + Type;
    }
    const string HomeAnimal::PrintFoot()
    {
        return "строение стопы - " + Foot;
    }
    const string HomeAnimal::PrintName()
    {
        return "по имени - " + Name;
    }
}
