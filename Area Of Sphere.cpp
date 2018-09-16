#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main(void)
{
	system("cls");
	float r;
	printf("enter the value of r ");
	scanf_s("%f", &r);
	float pi = 3.14;
	float a = 4;
	float b = pow(r,2);
	float mul = a*pi*b;
	printf("The value of Area is %f ", mul);
	_getch();
}