//34.write a program to print the factorial of a number accepted by the user.
#include<stdio.h>
int main()
{
	int n,a=1;
	printf("Enter the value : ");
	scanf("%d",&n);
	for (int i=n;i>0;i--){
	a=a*i;
	}
	printf("%d\n",a);
	return 0;
}
