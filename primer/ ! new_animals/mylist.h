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

/// ����� ������ �� �����
void PrintList(MyList);
ostream & operator << (ostream & ,MyList);
/// ��������� ������ � ����
void SaveList(MyList,const char *);
/// ���������� ��������� �� ������� �� ������
MyIterator Pos(MyList &, unsigned int);
/// ���������� ��������� �� ������� �� �����
MyIterator Name(MyList &, string);
/// �������� �� ������ �������
void EraseFromList(MyList &, unsigned int);


#endif // MYLIST_H_INCLUDED
