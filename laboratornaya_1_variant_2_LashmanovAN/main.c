#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<windows.h>

int main()
{
    system("chcp 1251 > NUL");
    printf("������������ ������ �1 ������� �1\n\
�������� ������� ��.������-11 �������� �.�. \n\
�� ����������� ������� ����� �������� ����������\n\
�������� ������� ��������� ���������� � ���� �������\n\n");
	float side1,side2;
	double roundS;
	float a[2];
	float b[2];
	float c[2];
	float d[2];
    printf("������� ���������� 1-�� ����� ��������\n");
	printf("�� ��� �:\n");
	scanf("%f", &a[0]);
	printf("�� ��� Y:\n");
	scanf("%f", &a[1]);
	printf("������� ���������� 2-�� ����� ��������\n");
	printf("�� ��� �:\n");
	scanf("%f", &b[0]);
	printf("�� ��� Y:\n");
	scanf("%f", &b[1]);
	printf("������� ���������� 3-�� ����� ��������\n");
	printf("�� ��� �:\n");
	scanf("%f", &c[0]);
	printf("�� ��� Y:\n");
	scanf("%f", &c[1]);
	printf("������� ���������� 4-�� ����� ��������\n");
	printf("�� ��� �:\n");
	scanf("%f", &d[0]);
	printf("�� ��� Y:\n");
	scanf("%f", &d[1]);
	side1 = sqrt(pow((a[0]-b[0]),2)+pow((a[1]-b[1]),2));
	side2 = sqrt(pow((a[0]-c[0]),2)+pow((a[1]-c[1]),2));
	if(side1>=side2){
		roundS = (3.1415926*pow((side2/2),2));
	} else{
		roundS = (3.1415926*pow((side1/2),2));
	}
	printf("������� ��������� ���������� � ������ ������� ����������: %.4f\n", roundS);
	system("pause");
    return 0;
}
