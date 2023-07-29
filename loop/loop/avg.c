//26.write a program to accept 10 numbers from the user and display its average.
#include<stdio.h>
int main()
{
	int n,sum=0,average;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a;
	printf("Enter the value : ");
	scanf("%d",&a);
	sum=sum+a;
	}
	average=sum/n;
	printf("%d\n",average);
	return 0;
}
	
