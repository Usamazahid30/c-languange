#include <stdio.h>
#include<conio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
	int i, n, sum = 0;
	printf("Input Value of terms : ");
	scanf_s("%d", &n);
	printf("\nThe first %d natural numbers are:\n", n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", i);
		sum += i;
	}
	printf("\nThe Sum of natural numbers upto %d terms : %d \n", n, sum);
	_getch();
}