#ifndef Cow_H
#define Cow_H
# include <iostream>
# include "herbivores.h"

using namespace std;
using namespace herbivores;

namespace cow{
class Cow : public Herbivores {
public:
    Cow();
    Cow(string, string);
    virtual ~Cow() {};
    const string PrintHorns();
    const string GetHorns();
    void SetHorns(const string);
    // мои параметры
    //virtual
    void MySettings();
    virtual void OutParams(ofstream &);
private:
    string Horns; /// рога
};
}
#endif

    //virtual void How_make_sounds(); // как издает звуки
