// 8. construct a flowchart to show how to interchange the value of the two variable without using the third varible.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The interchange value is :%d\n",a);
	printf("The interchange value is :%d\n",b);
	return 0;
}

