//3.given an integer number (n) as input write a program to print the sum of frist n natural numbers.
#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter the n : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	sum=sum+i;
	}
	printf("%d\n",sum);
	return 0;
}
