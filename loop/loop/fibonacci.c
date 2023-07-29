//33.write a program to display print the fibonacci series till n terms.
#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	printf("%d\n",a);
	c=a+b;
	a=b;
	b=c;
	}
	return 0;
}
	
