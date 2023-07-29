//37.write a program to check whether a number is palindrome or not.
#include<stdio.h>
int main()
{
	int n,sum=0,a;
	printf("Enter the number : ");
	scanf("%d",&n);
	int i=n;
	while (i>0){
	a=i%10;
	sum=a+(sum*10);
	i=i/10;
	}
	if (n==sum)
	{
		printf("palindrome number\n");
	}
	else
	{
		printf("not palindrome number\n");
	}
	return 0;
}
