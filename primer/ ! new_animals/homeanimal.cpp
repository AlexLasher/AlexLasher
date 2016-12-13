#include <iostream>
#include "homeanimal.h"

using namespace std;

namespace homeanimal{

    HomeAnimal::HomeAnimal() // ������������� ���������-������
    {
        //cout << "HomeAnimal" << endl;
        Type = "";
        Foot = "";
        Name = " ��� ����� ";
    }
    void HomeAnimal::SetType(const string s)
    {
        if ((s=="����������")||(s=="������"))
            Type = s;
        else
            cout << "�������� ����� ���� \"����������\" ��� \"������\" " << endl;
    }
    void HomeAnimal::SetFoot(const string s)
    {
        if ((s=="������")||(s=="����"))
            Foot = s;
        else
            cout << "����� ����� ���� \"������\" ��� \"����\" " << endl;
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
        return "�������� �������� - " + Type;
    }
    const string HomeAnimal::PrintFoot()
    {
        return "�������� ����� - " + Foot;
    }
    const string HomeAnimal::PrintName()
    {
        return "�� ����� - " + Name;
    }
}
