//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#include <math.h>
int main()
{
	int r;
	
	printf("ENTER RADIUS:");
	scanf("%d",&r);

	printf("CIRCUMFERENCE IS:%f\n",2*M_PI*r);
	return 0;
}
/*
C:\Users\exipc0202\OneDrive\Desktop\cprog>p2d2.exe
ENTER RADIUS:4
CIRCUMFERENCE IS:25.132741
*/