//9.write a program to print the factorial of N factorial is the product of all positive intergers less than or equal to N.
#include<stdio.h>
int main()
{
	int n,factorial=1;
	printf("Enter the n : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	factorial=factorial*i;
	printf("factorial=%d\n",factorial);
	}
	return 0;
}
