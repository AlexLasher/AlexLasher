#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<windows.h>

int main()
{
    system("chcp 1251 > NUL");
    printf("Лабораторная работа №1 вариант №1\n\
Выполнил студент гр.ЦИСТбв-11 Лашманов А.Н. \n\
По координатам четырех точек квадрата определить\n\
значение площади вписанной окружности в этот квадрат\n\n");
	float side1,side2;
	double roundS;
	float a[2];
	float b[2];
	float c[2];
	float d[2];
    printf("Введите координаты 1-ой точки квадрата\n");
	printf("по оси Х:\n");
	scanf("%f", &a[0]);
	printf("по оси Y:\n");
	scanf("%f", &a[1]);
	printf("Введите координаты 2-ой точки квадрата\n");
	printf("по оси Х:\n");
	scanf("%f", &b[0]);
	printf("по оси Y:\n");
	scanf("%f", &b[1]);
	printf("Введите координаты 3-ей точки квадрата\n");
	printf("по оси Х:\n");
	scanf("%f", &c[0]);
	printf("по оси Y:\n");
	scanf("%f", &c[1]);
	printf("Введите координаты 4-ой точки квадрата\n");
	printf("по оси Х:\n");
	scanf("%f", &d[0]);
	printf("по оси Y:\n");
	scanf("%f", &d[1]);
	side1 = sqrt(pow((a[0]-b[0]),2)+pow((a[1]-b[1]),2));
	side2 = sqrt(pow((a[0]-c[0]),2)+pow((a[1]-c[1]),2));
	if(side1>=side2){
		roundS = (3.1415926*pow((side2/2),2));
	} else{
		roundS = (3.1415926*pow((side1/2),2));
	}
	printf("Площадь вписанной окружности в данный квадрат составляет: %.4f\n", roundS);
	system("pause");
    return 0;
}
