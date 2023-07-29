// 4.construct a flowchart to show how to obtained the area of a triangle on basis of the base and height.
#include <stdio.h>
int main()
{
	int h,b,a;
	printf("Enter the base : ");
	scanf("%d",&h);
	printf("Enter the height : ");
	scanf("%d", &b);
	a=(b*h)/2;
	printf("The area of triangle is :%d\n",a);
	return 0;
}	

