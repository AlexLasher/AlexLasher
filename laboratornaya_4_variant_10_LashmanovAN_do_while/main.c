#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void info();
//void onPrint(int stringNum, int part);
void Part(char b, char c, char s);


int main()
{
    info();
    //char a=65;
    int stringNum=-3;
    do{
        if(abs(stringNum)!=0){
            Part(' ',abs(stringNum),0);
        }
        if(-abs(stringNum)+4!=0){
            Part(-abs(stringNum)+3+'A',-abs(stringNum)+4,-1);
        }
        if(-abs(stringNum)+3!=0){
            Part('B',-abs(stringNum)+3,1);
        }
        printf("\n");
        stringNum++;
    }while(stringNum<4);
    printf("\n");
    system("pause");
    return 0;
}
void info(){
    system("chcp 1251 > NUL");
    printf("������������ ������ N4 ������� N10\n\
�������� ������� ��.������-11 �������� �.�.\n\
������:����������� �� ������ �������� ������� ��������, ���������\n\
������ ����� (��� ������������� ��������, ����� ��� ������ �����\n\
������ ����� ��������� ����)\n\
����� ���������� ��������� ������ ����\n\
�������� �� ������ ������� ���������� ����:\n\
   A\n\
  BAB\n\
 CBABC\n\
DCBABCD\n\
 CBABC\n\
  BAB\n\
   A\n\
������ ��������� ��� ������ ������ do while:\n\n");
}
void Part(char b, char c, char s){
    char i;
    i=1;
    do{
        printf("%2c",b);
        i++;
        b+=s;
    }while(i<=c);
}

