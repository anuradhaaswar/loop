//15.you are given two numbers. A and B where 1<=A<=B,write a program to find the number of perfect square in the range AtoB.
#include<stdio.h>
int main()
{
	int a=9,b=100,c=5,product;
	printf("Enter the a : ");
	scanf("%d",&a);
	printf("Enter the b : ");
	scanf("%d",&b);
	for (int i=1;a<=b;i++){
	product=i*i;
	}
	if (product==a)
	{
		a=i*i;
		c=c+2;
		a=a+c;
	}
	printf("a=%d\n",a);
	return 0;
}
