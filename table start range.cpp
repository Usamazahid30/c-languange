#include<stdio.h>;
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main(void){
	int a, b,c;
	printf("Enter a number to start a table ");
	scanf_s("%d", &c);
	printf("Enter a number to pr1int a table ");
	scanf_s("%d", &a);
	printf("Enter a number to Range of a table ");
	scanf_s("%d", &b);
	for (int i = c; i <= b; i++)
		printf("\n%dx%d=%d", a, i, a*i);
	_getch();
}