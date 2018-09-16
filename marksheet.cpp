#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main(void){
	int a, b, c, d, f,y;
	printf("Enter Obtained Marks ");
	scanf_s("%d", &y);
		printf("Enter your Math Number ");
		scanf_s("%d", &a);
		printf("Enter your English Number ");
		scanf_s("%d", &b);
		printf("Enter your Urdu Number ");
		scanf_s("%d", &c);
		printf("Enter your Islamiat Number ");
		scanf_s("%d", &d);
		printf("Enter your Physics Number ");
		scanf_s("%d", &f);
		printf("\n");
		printf("Percentage of all subject");
		printf("\n");
		float g = a* 100.0 / y;
		float  h= b* 100.0 / y;
		float  i= c* 100.0 / y;
		float  j= d* 100.0 / y;
		float  k= f* 100.0 / y;
		printf("\n%f \n%f  \n%f  \n%f  \n%f ", g,h,i,j,k);
		printf("\n");
		int x = a + b + c + d + f; /*Marks*/
		printf("\nTotal Marks= %d ", x);
		int  m = y * 5;  /*Total Obtained marks*/
		printf("\nTotal Obtained marks= %d", m);
		float u = x * 100.0 / m; /*Total Percentage*/
		printf("\nTotal Percentage= %f", u);
		_getch();
}