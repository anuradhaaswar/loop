//4.given an integers n, write a program which reads N input and prints them.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the n : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a;
	printf("Enter the a : ");
	scanf("%d",&a);
	printf("%d\n",a);
	}
	return 0;
}
