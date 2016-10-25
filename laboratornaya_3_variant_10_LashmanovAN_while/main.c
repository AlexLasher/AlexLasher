#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("chcp 1251 > NUL");
    printf("Лабораторная работа N3 вариант N10\n\
Выполнил студент гр.ЦИСТбв-11 Лашманов А.Н.\n\
Задача:Распечатать на экране монитора таблицу символов, используя\n\
только циклы (без использования массивов, строк или других типов\n\
данных кроме литерного типа)\n\n\
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
    char a = 65;
    int i=0,j,k,l=3;
    while(i<7){
        k=3;
        j=0;
        while(j<7){
            if(i<=3){
                if(k-i<=0){
                    printf("%2c", a+k);
                }else{
                    printf("%2c", 32);
                }
                j<3 ? k--: k++;
            } else{
                if(i-k<=0){
                    printf("%2c", a+l);
                }else{
                    printf("%2c", 32);
                }
                if(j<3){
                    k++;l--;
                } else{
                    k--;l++;
                }
            }
            j==6 ? printf("\n"):1;
            j++;
        }
        i++;
    }
    printf("\n");
    system("pause");
    return 0;
}
