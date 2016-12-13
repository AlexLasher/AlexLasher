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

    // мои параметры
    virtual void MySettings() {cout << 1111 << endl;};
    virtual void OutParams(ofstream &) {};

private:
    string Type; /// вид животного
    string Foot; /// строение стопы
    string Name; /// имя животного
};
}
#endif

    // формальные функции
    //virtual void How_make_sounds() {}; // как издает звуки
    //virtual void How_is_eating() {}; // как ест
    //virtual void  How_drinks() {}; // как пьет
