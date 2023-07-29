//32.write a program to find the sum of following series:-1+2+6+24+120+....n
#include<stdio.h>
int main()
{
	int n,sum=0,a=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
	a=a*(i+1);
	sum=sum+a;
	}
	printf("%d\n",sum);
	return 0;
}
