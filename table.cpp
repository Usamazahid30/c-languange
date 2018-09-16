n#include<stdio.h>;
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main(void){
	int a ,b;
	printf("Enter a number to pr1int a table ");
	scanf_s("%d", &a);
	printf("Enter a number to Range of a table ");
	scanf_s("%d", &b);
	for (int i = 1; i <=b; i++)
		printf("\n%dx%d=%d", a, i, a*i);
	_getch();
}
