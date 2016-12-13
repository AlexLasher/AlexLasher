# include <iostream>
#include "cow.h"

using namespace std;
//using namespace homeanimals;

namespace cow{

    Cow::Cow() // ������������� ���������-������
    {
        Herbivores::SetType("������");
        SetHoof("������");
    }
    Cow::Cow(string aName, string aHorns) // ������������� ���������-������
    {
        //cout << "Cow" << endl;
        Herbivores::SetType("������");
        SetHoof("������");
        SetName(aName);
        SetHorns(aHorns);
    }
    const string Cow::PrintHorns()
    {
        return "���� - " + Horns;
    }
    const string Cow::GetHorns()
    {
        return Horns;
    }
    void Cow::SetHorns(const string s)
    {
        if ((s=="������")||(s=="������"))
            Horns = s;
        else
            cout << "���� ����� ���� \"������\" ��� \"������\" " << endl;
    }
    // ��� ���������
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
        cout << "��� ������ ����� - �����" << endl;
    }*/
