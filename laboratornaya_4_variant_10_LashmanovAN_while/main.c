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
    while(stringNum<4){
        Part(' ',abs(stringNum),0);
        Part('D'-abs(stringNum),4-abs(stringNum),-1);
        Part('B',3-abs(stringNum),1);
        printf("\n");
        stringNum++;
    }
    printf("\n");
    system("pause");
    return 0;
}
void info(){
    system("chcp 1251 > NUL");
    printf("Лабораторная работа N4 вариант N10\n\
Выполнил студент гр.ЦИСТбв-11 Лашманов А.Н.\n\
Задача:Распечатать на экране монитора таблицу символов, используя\n\
только циклы (без использования массивов, строк или других типов\n\
данных кроме литерного типа)\n\
после выполнения программы должна быть\n\
выведена на печать таблица следующего вида:\n\
   A\n\
  BAB\n\
 CBABC\n\
DCBABCD\n\
 CBABC\n\
  BAB\n\
   A\n\
начало программы при помощи циклов while:\n\n");
}
void Part(char b, char c, char s){
    char i;
    i=1;
    while(i<=c){
        printf("%2c",b);
        i++;
        b+=s;
    }
}
