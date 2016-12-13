#ifndef HORSE_H
#define HORSE_H
# include <iostream>
# include "herbivores.h"

using namespace std;
using namespace herbivores;

namespace horse{
class Horse : public Herbivores {
public:
    Horse();
    Horse(string, string);
    virtual ~Horse() {};
    const string GetHorseshoe();
    void SetHorseshoe(const string);
    // мои параметры
    virtual void MySettings();
private:
    string Horseshoe; ///
};
}
#endif

    //virtual void How_make_sounds(); // как издает звуки
