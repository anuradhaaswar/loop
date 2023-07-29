//28.write a program to print the following series till n terms 2,22,222,...,n terms.
#include<stdio.h>
int main()
{
	int n,a=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	a=(a*10)+2;
	printf("%d\n",a);
	}
	return 0;
}	
