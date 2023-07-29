// 14. construct a flowchart to calculate the area of a circle.
#include<stdio.h>
int main()
{
	float r,area;
	float pi;
	pi=3.14;
	printf("Enter the value r : ");
	scanf("%f",&r);
	area=pi*(r*r);
	printf("The area is :%.2f\n",area);
	return 0;
}
