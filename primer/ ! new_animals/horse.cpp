# include <iostream>
#include "horse.h"

using namespace std;
//using namespace homeanimals;

namespace horse{

    Horse::Horse() // ������������� ���������-������
    {
        SetType("������");
        SetHoof("��������");
    }
    Horse::Horse(string aName, string aHorseshoe) // ������������� ���������-������
    {
        SetType("������");
        SetHoof("��������");
        SetName(aName);
        SetHorseshoe(aHorseshoe);
    }
    const string Horse::GetHorseshoe()
    {
        return "������� - " + Horseshoe;
    }
    void Horse::SetHorseshoe(const string s)
    {
        if ((s=="�����������")||(s=="�����������"))
            Horseshoe = s;
        else
            cout << "������� ����� ���� \"�����������\" ��� \"�����������\" " << endl;
    }
    // ��� ���������
    void Horse::MySettings()
    {
        Herbivores::MySettings();
        cout << GetHorseshoe() << endl<< endl;
    }

}
/*
    void Horse::How_make_sounds()
    {
        cout << "��� ������ ����� - ���" << endl;
    }*/
