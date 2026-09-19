///Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main ()
{
	int a,b,sum,dif,mul,div;
	printf("ENTER FIRST NUMBER:");
	scanf("%d",&a);
	printf("ENTER SECOND NUMBER:");
	scanf("%d",&b);
	
	sum=a+b;
	dif=a-b;
	mul=a*b;
	div=a/b;
	
	printf("SUM:%d\n",sum);
	printf("DIFFERENCE:%d\n",dif);
	printf("PRODUCT:%d\n",mul);
	printf("QUOTIENT:%d\n",div);
	
	return 0;
}
/*
C:\Users\exipc0202\OneDrive\Desktop\cprog>program2_day1.exe
ENTER FIRST NUMBER:3
ENTER SECOND NUMBER:2
SUM:5
DIFFERENCE:1
PRODUCT:6
QUOTIENT:1
*/

	
