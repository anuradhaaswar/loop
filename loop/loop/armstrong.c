//35.write a program to check whether a number is armstrong or not.(armstrong number is a number that is equal to the sum of cubes of its digits.
#include<stdio.h>
int main()
{
	int n,arm=0,a;
	printf("Enter the number : ");
	scanf("%d",&n);
	int i=n;
	while (i>0){
	a=i%10;
	arm=arm+(a*a*a);
	i=i/10;
	}
	if (n==arm)
	{
		printf("armstrong number\n");
	}
	else
	{
		printf("not armstrong number\n");
	}
	return 0;
}
	
