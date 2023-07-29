//10.given two integers M N write a program to print the product of numbers in the range M and N (inclusive M and N).
#include<stdio.h>
int main()
{
	int m,n,product=1,sum,total;
	printf("Enter the value m : ");
	scanf("%d",&m);
	printf("Enter the value n : ");
	scanf("%d",&n);
	for (;m<=n;m++){
	product=product*m;
	}
	printf("total=%d\n",product);
	return 0;
}
