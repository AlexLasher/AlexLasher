#ifndef MYLIST_H_INCLUDED
#define MYLIST_H_INCLUDED

#include <list>
#include <algorithm>
#include <windows.h>
#include "homeanimal.h"

using namespace std;
using namespace homeanimal;

typedef list <HomeAnimal*> MyList;
typedef MyList :: iterator MyIterator;

/// Вывод списка на экран
void PrintList(MyList);
ostream & operator << (ostream & ,MyList);
/// Сохранить список в файл
void SaveList(MyList,const char *);
/// Определить указатель на элемент по номеру
MyIterator Pos(MyList &, unsigned int);
/// Определить указатель на элемент по имени
MyIterator Name(MyList &, string);
/// Удаление по номеру позиции
void EraseFromList(MyList &, unsigned int);


#endif // MYLIST_H_INCLUDED
