# include <iostream>
# include <iostream>

#include "herbivores.h"

using namespace std;
using namespace homeanimal;

namespace herbivores{

    Herbivores::Herbivores() // ������������� ���������-������
    {
        //cout << "Herbivores" << endl;
        HomeAnimal::SetType("����������");
        SetFoot("������");
    }
    void Herbivores::SetType(const string s)
    {
        if ((s=="������")||(s=="������"))
            Type = s;
        else
            cout << "�������� ����� ���� \"������\" ��� \"������\" " << endl;
    }
    void Herbivores::SetHoof(const string s)
    {
        if ((s=="������")||(s=="��������"))
            Hoof = s;
        else
            cout << "������ ����� ���� \"������\" ��� \"��������\" " << endl;
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
        return "������ - " + Hoof;
    }
    // ��� ���������
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
        cout << "��� ��� - ����� ����" << endl;
    }
    void Herbivores::How_drinks()
    {
        cout << Rus("��� ���� - ��������� ����") << endl;
    }
*/
