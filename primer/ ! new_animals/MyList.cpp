#include "MyList.h"
#include <algorithm>
#include <fstream>
#include <windows.h>

using namespace std;

/// Вывод списка на экран
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


/// Сохранить список в файл
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
/// Определить указатель на элемент по номеру
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

// Определить указатель на элемент по имени
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
// Удаление по номеру позиции
void EraseFromList(MyList &Animals, unsigned int n)
{
    MyIterator pos;
    if (Animals.size()>=n)
    {
        pos = Pos(Animals,n);
        Animals.erase(pos);
    }
    else cout << "Элемента с таким номером в списке нет\n\n\n" << endl;
}
