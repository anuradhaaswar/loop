//17.write a program to print the multiplication table of the given number (N) up to ten multiplies in the formate.
#include<stdio.h>
int main()
{
	int n,table;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (int i=1;i<=10;i++){
	table=n*i;
	printf("%d\n",table);
	}
	return 0;
}
