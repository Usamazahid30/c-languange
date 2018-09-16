#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main(void)
{
	system("cls");
	printf("Calculate Ohm's Law\n");
	float a, b;
	printf("Enter Current Value ");
	scanf_s("%f", &a);
	printf("Enter Resistance Value ");
	scanf_s("%f", &b);
	float mul = a*b;
	printf("\n The value of voltage is %f", mul);
	_getch();
}