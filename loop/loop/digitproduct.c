//25.write a program to find the product to find product of the digit of a number accepted from the user.
#include<stdio.h>
int main()
{
	int n,product=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a;
	printf("Enter the value : ");
	scanf("%d",&a);
	product=product*a;
	}
	printf("%d\n",product);
	return 0;
}
