//31.write a program to find the sum of following series.
#include<stdio.h>
int main()
{
	int n,a,sum;
	printf("Enter the value : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	a=i*i*i;
	sum=sum+a;
	}
	printf("%d\n",sum);
	return 0;
}
	
	
