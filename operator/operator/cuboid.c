// 18. construct a flowchart to find the lateral surface area and total surface area of cuboid.
#include<stdio.h>
int main()
{
	int l,b,h,lateral,surface;
	printf("Enter the frist value l : ");
	scanf("%d",&l);
	printf("Enter the second value b : ");
	scanf("%d",&b);
	printf("Enter the third value h : ");
	scanf("%d",&h);
	lateral=2*h*(l+b);
	surface=2*l*b+2*l*h+2*h*b;
	printf("The lateral is :%d\n",lateral);
	printf("The surface is :%d\n",surface);
	return 0;
}

