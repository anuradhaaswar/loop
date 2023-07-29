//13.write a program to check whether the given number is perfect number or not a number is considered as perfect number if sum of all factors excluding itsself is equal to the number.
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the value n : ");
	scanf("%d",&n);
	for (int i=1;i<n;i++){
		if (n%i==0)
		{
			sum=sum+i;
		}
	}
	if (n==sum)
		{
			printf("Perfect number\n");
		}
	else
	{
			printf("not perfect number\n");
	}
		return 0;
}	
