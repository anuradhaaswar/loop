//14.given integer N as input. write a program to print the sum of series 1+11+111... N terms.
#include<stdio.h>
int main()
{
	int n,sum=0,a=1;
	printf("Enter the number n : ");
	scanf("%d",&n);
	for (int i=1;i<n;i++){
	a=(a*10)+a;
	sum=sum+a;
	}
	printf("sum=%d\n",sum);
	return 0;
}
	
