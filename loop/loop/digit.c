//24.write a program to find the sum of the digit of a number accepted from the user.
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a;
	printf("Enter the value : ");
	scanf("%d",&a);
	sum=sum+a;
	}
	printf("%d\n",sum);
	return 0;
}
