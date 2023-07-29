//2. given two integer number m and n,write a program to print the integers from m to n.
#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter m value : ");
	scanf("%d",&m);
	printf("Enter n value: ");
	scanf("%d",&n);
	for(;m<=n;m++){
	printf("%d\n",m);
	}
	return 0;
}
