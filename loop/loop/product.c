//6.(N) write a program which reads N inputs and prints the product of the given input integers.
#include<stdio.h>
int main()
{
	int n,product=1;
	printf("Enter the n : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a;
	printf("Enter the a : ");
	scanf("%d",&a);
	product=product*a;
	}
	printf("product=%d\n",product);
	return 0;
}
