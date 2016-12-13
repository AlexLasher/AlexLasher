#ifndef HOMEANIMAL_H
#define HOMEANIMAL_H
#include <iostream>
#include <fstream>

using namespace std;

namespace homeanimal{

class HomeAnimal {
public:
    HomeAnimal();
    virtual ~HomeAnimal() {};

    void SetType(const string);
    void SetFoot(const string);
    void SetName(const string);

    const string GetType();
    const string GetFoot();
    const string GetName();

    const string PrintType();
    const string PrintFoot();
    const string PrintName();

    // ��� ���������
    virtual void MySettings() {cout << 1111 << endl;};
    virtual void OutParams(ofstream &) {};

private:
    string Type; /// ��� ���������
    string Foot; /// �������� �����
    string Name; /// ��� ���������
};
}
#endif

    // ���������� �������
    //virtual void How_make_sounds() {}; // ��� ������ �����
    //virtual void How_is_eating() {}; // ��� ���
    //virtual void  How_drinks() {}; // ��� ����
