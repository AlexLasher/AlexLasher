#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<math.h>

#define e 2.71828
#define UNKNOWN 0

int main()
{
    system("chcp 1251 > NUL");
    printf("������������ ������ �1 ������� �2\n\
�������� ������� ��.������-11 �������� �.�. \n\n\
�������: ��������� �������� if, ��������� ��������� \n\
��� ���������� ��������� ������� ����: \n\
1> y=pow(e,x)+x  ��� x >= -4.0 � x < -3.0\n\
2> y=pow(e,-x)+sin(x)  ��� x >= -3.0 � x < 0\n\
3> y=0 ��� x >= 0 � x < 1.5\n\
4> y=-4*(x-1.5)  ��� x >= 1.5 � x <= 2.0\n\
������� �������, ��� ��������� �������� \n\
� ������� �������� ������� � ������ �����. \n\n");
    printf("������� �������� ��������� �������(�)\n");
    scanf("%f", &x);
    float x,y;
    int otrezok = UNKNOWN;
    if(x>=-4 && x<-3){
        otrezok = 1;
    } else if(x>=-3 && x<0){
        otrezok = 2;
    } else if(x>=0 && x<1.5){
        otrezok = 3;
    } else if(x>=1.5 && x<=2){
        otrezok = 4;
    }
    switch(otrezok){
        case 1:
            y=pow(e,x)+x;
            break;
        case 2:
            y=pow(e,-x)+sin(x);
            break;
        case 3:
            y=0;
            break;
        case 4:
            y=-4*(x-1.5);
            break;
        default:
            printf("�������� ������� �� ����������\n");
            system("pause");
            exit(1);
            break;
    }
    printf("�������� ������� �� ������� %d ����� %f\n\n", otrezok ,y);
    system("pause");
    return 0;
}
