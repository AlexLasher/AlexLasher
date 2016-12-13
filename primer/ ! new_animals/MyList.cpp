#include "MyList.h"
#include <algorithm>
#include <fstream>
#include <windows.h>

using namespace std;

/// ����� ������ �� �����
void PrintList(MyList Animals)
{
    MyIterator pos; HomeAnimal *p;
    pos = Animals.begin();
    while (pos!=Animals.end())
    {
        p = (*pos);
        p->MySettings();
        pos++;
    }
}

ostream & operator << (ostream & out, MyList Animals)
{
    cout << 1111111 << endl;
    PrintList(Animals);
    return out;
}


/// ��������� ������ � ����
void SaveList(MyList Animals,const char * FileName)
{
    ofstream fout;

    fout.open(FileName);

    MyIterator pos; HomeAnimal *p;
    pos = Animals.begin();
    while (pos!=Animals.end())
    {
        p = (*pos);
        p->OutParams(fout);
        pos++;
    }
    fout.close();
}
/// ���������� ��������� �� ������� �� ������
MyIterator Pos(MyList &Animals, unsigned int n)
{
    MyIterator pos;
    pos = Animals.begin();
    while (n>0)
    {
        //(*pos)->MySettings();
        pos++;
        n--;
    }
    return pos;
}

// ���������� ��������� �� ������� �� �����
MyIterator Name (MyList &Animals, string Nam)
{
    MyIterator pos;
    pos = Animals.begin();
    HomeAnimal* p;
    string s;
    while ((pos!=Animals.end())
           &&(Nam!=s))
        {
            p = (*pos);
            s = p->GetName();
            if (s == Nam) break;
            pos++;
        }
    return pos;
}
// �������� �� ������ �������
void EraseFromList(MyList &Animals, unsigned int n)
{
    MyIterator pos;
    if (Animals.size()>=n)
    {
        pos = Pos(Animals,n);
        Animals.erase(pos);
    }
    else cout << "�������� � ����� ������� � ������ ���\n\n\n" << endl;
}
