//23.write a program to check whether a number is prime or not.
#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
	if (n%i==0)
		{
			count=count+1;
		}
	}
	
	if (count==2)
		{
			printf("prime number\n");
		}
	else
		{
			printf("not prime number\n");
		}
	return 0;
}	 
	
