// 7. construct a flowchart to show how to interchange the value of two variables.
#include<stdio.h>
int main()
{
	int a,b,temp;	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Before swapping :\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	//sawpping the values
	temp=a;
	a=b;
	b=temp;
	printf("After swapping:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}
