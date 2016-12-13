#ifndef HERBIVORES_H
#define HERBIVORES_H
#include "homeanimal.h"

using namespace std;
using namespace homeanimal;

namespace herbivores{
class Herbivores : public HomeAnimal {
public:
    Herbivores();
    virtual ~Herbivores() {};

    void SetType(const string);
    void SetHoof(const string);

    const string GetType();
    const string GetHoof();

    const string PrintType();
    const string PrintHoof();

    // ��� ���������
    //virtual
    void MySettings();
    virtual void OutParams(ofstream &);

private:
    string Type;
    string Hoof; // �������� ������
};
}
#endif

    //virtual void How_is_eating(); // ��� ���
    //virtual void  How_drinks(); // ��� ����
