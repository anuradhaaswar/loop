// 31.write a program to take two numbers a and b as input from the user and print the number closet to (but less than) A whichis complete divisible by b.
#include<stdio.h>
int main()
{
	int a,b,divisible;
	printf("Enter the value a : ");
	scanf("%d",&a);
	printf("Enter the value b : ");
	scanf("%d",&b);
	divisible=a/b;
	printf("The divisible is :%d\n",divisible);
	return 0;
} 	

