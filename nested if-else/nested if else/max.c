//1.construct a flowchart to find a maximum between three numbers.
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter the 1st value : ");
	scanf("%d",&a);
	printf("Enter the 2nd value  : ");
	scanf("%d",&b);
	printf("Enter the 3rd value : ");
	scanf("%d",&c);
	if (a>b)
	{
		max=a;
	}
	else 
	{
		max=b;
	}
	if (max>c)
	{
		printf("max=%d\n",max);
	}
	else
	{	
		printf("c=%d\n",c);
	}
	return 0;
}
	
