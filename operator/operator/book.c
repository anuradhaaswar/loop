//26.construct a flowchart to calculate how many books we can buy if we have x Rs. (cost of a book Rs=.y)(input x,y from user)
#include<stdio.h>
int main()
{
	int x,y,total;
	printf("Enter the frist value x : ");
	scanf("%d",&x);
	printf("Enter the second value y : ");
	scanf("%d",&y);
	total=x/y;
	printf("The total is :%d\n",total);
	return 0;
}
