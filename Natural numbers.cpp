#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main(void)
{
	int i, sum = 0;
	printf("The forst 10 natural numbers :");
	for (i = 1; i <= 10; i++)
	{
		sum = sum + i;
		printf("\n%d", i);
	}
	printf("\nSum of natural numbers 1 to 10 : %d \n", sum);
	_getch();
}
