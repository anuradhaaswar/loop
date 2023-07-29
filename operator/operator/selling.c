// 23.construct a flowchart to calculate the selling price of a product if MRP and discount are given(input MRP and discount from user.)
#include<stdio.h>
int main()
{
	int mrp,discount,sp;
	printf("Enter the frist value mrp : ");
	scanf("%d",&mrp);
	printf("Enter the second value discount : ");
	scanf("%d",&discount);
	sp=mrp-discount;
	printf("The selling price is :%d\n",sp);
	return 0;
}
