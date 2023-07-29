// 11. construct a  to calculate the area and perimeter of a rectangle (input length & breath of the rectangle from user)
#include<stdio.h>
int main()
{
	int w,l,area,pr;
	printf("Enter the frist value w : ");
	scanf("%d",&w);
	printf("Enter the second value l : ");
	scanf("%d",&l);
	area=w*l;
	pr=2*(l+w);
	printf("The area & perimeter is  :%d\n%d\n",area,pr);
	return 0;
}

