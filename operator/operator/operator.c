//10. construct a flowchart to add ,substrct,divide and multiply two interchange a and b.
#include<stdio.h>
int main()
{
	int a,b,sum,sub,divide,multiply;
	printf("Enter the frist value a : ");
	scanf("%d",&a);
	printf("Enter the second value b: ");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;
	divide=a/b;
	multiply=a*b;
	printf("The all is :%d\n%d\n%d\n%d\n", sum,sub,divide,multiply);
	return 0;
}

