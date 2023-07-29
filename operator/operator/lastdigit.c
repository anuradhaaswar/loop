// 20.construct a flowchart to display the last digit of a number.
#include<stdio.h>
int main()
{
	int a,digit;
	printf("Enter the value a : ");
	scanf("%d",&a);
	digit=a%10;
	printf("The digit is :%d\n",digit);
	return 0;
}	
