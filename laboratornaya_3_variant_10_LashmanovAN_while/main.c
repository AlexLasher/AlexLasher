#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("chcp 1251 > NUL");
    printf("������������ ������ N3 ������� N10\n\
�������� ������� ��.������-11 �������� �.�.\n\
������:����������� �� ������ �������� ������� ��������, ���������\n\
������ ����� (��� ������������� ��������, ����� ��� ������ �����\n\
������ ����� ��������� ����)\n\n\
����� ���������� ��������� ������ ����\n\
�������� �� ������ ������� ���������� ����:\n\
   A\n\
  BAB\n\
 CBABC\n\
DCBABCD\n\
 CBABC\n\
  BAB\n\
   A\n\
������ ��������� ��� ������ ������ while:\n\n");
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
