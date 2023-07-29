//5.given an integer N,write a program which reads N input and prints the sum of the given input integers.
#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter the n : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a;
	printf("Enter the a : ");
	scanf("%d",&a);
	sum=sum+a;
	printf("%d\n",sum);
	}
	return 0;
}
