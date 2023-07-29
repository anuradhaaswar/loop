//16.write a program to print frist 10 integers and their square like and so on.
#include<stdio.h>
int main()
{
	int n,square=0;
	printf("Enter the value : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	square=i*i;
	printf("square=%d\n",square);
	}
	return 0;
}
	
