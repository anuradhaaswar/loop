// 12. construct a flowchart to calculated the area and perimeter of square (input side length of the square from the user).
#include<stdio.h>
int main()
{
	int a,area,perimeter;
	printf("Enter the value a : ");
	scanf("%d",&a);
	area=a*a;
	perimeter=a*4;
	printf("The area & area of perimeter is :%d\n%d\n",area,perimeter);
	return 0;
}

