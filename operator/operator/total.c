// 6. if p amount of money is invested for N year at an annual rate of interest i, the money grows to an amount t , where T is given by T=P (1+l/100)n construct a flowchart to show how T is determined.
#include<stdio.h>
int main()
{
	int p,n,l,t;
	printf("Enter the frist value :");
	scanf("%d",&p);
	printf("Enter the second value :");
	scanf("%d",&n);
	printf("Enter the third value :");
	scanf("%d",&l);
	t=(1+l/100)*n;
	printf("The total is :%d\n",t);
	return 0;
}		

