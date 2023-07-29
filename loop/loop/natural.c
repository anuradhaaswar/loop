//9. write a program to print the sum of the kth power of the frist N natural numbers.
#include<stdio.h>
int main()
{
	int n,k,sum;
	printf("Enter the n : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	k=i*i*i;
	sum=sum+k;
	}
	printf("sum=%d\n",sum);
	return 0;
}
