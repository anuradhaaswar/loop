// 16. construct a flowchart to calculate the lateral surface area and total surface area of a cube.
#include<stdio.h>
int main()
{
	int a,lateral,total;
	printf("Enter the value a : ");
	scanf("%d",&a);
	lateral=4*a*a;
	total=6*a*a;
	printf("The lateral & total is :%d\n%d\n",lateral,total);
	return 0;
}

