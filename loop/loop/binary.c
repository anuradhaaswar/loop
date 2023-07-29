//36. write a program to convert binary to decimal.
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,k;
	int i=0,sum=0;
	printf("Enter the nunmber : ");
	scanf("%d",&n);
	while (n>0)
	{
		a=n%10;
		k=pow(2,i);
		sum=sum+a*k;
		n=n/10;
		i++;
	}
	printf("decimal number %d\n",sum);
	return 0;
}
	
