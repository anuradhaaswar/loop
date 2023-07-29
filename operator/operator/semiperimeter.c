// 13. construct a flowchart to calculate the semiperimeter of a triangle.
#include<stdio.h>
int main()
{
	int a,b,c,semiperimeter;
	printf("Enter the value a : ");
	scanf("%d",&a);
	printf("Enter the value b : ");
	scanf("%d",&b);
	printf("Enter the value c : ");
	scanf("%d",&c);
	semiperimeter=(a+b+c)/2;
	printf("The semiperimeter is :%d\n",semiperimeter);
	return 0;
}
