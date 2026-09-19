//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
	int l ,b;
	printf("ENTER LENGTH:");
	scanf("%d",&l);
	
	printf("ENTER BREADTH:");
	scanf("%d",&b);
	
	printf("AREA IS:%d\n",l*b);
	printf("PERIMETER IS:%d\n",2*(l+b));
	
	return 0;
}

/*
C:\Users\exipc0202\OneDrive\Desktop\cprog>p1d2.exe
ENTER LENGTH:2
ENTER BREADTH:3
AREA IS:6
PERIMETER IS:10
*/