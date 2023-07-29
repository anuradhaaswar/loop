// 27.from the reamanining amountin the above question , how many pens can be bought if one pen costs Rs.5.construct a flowchart.
#include<stdio.h>
int main()
{
	int x,y,pen;
	printf("Enter the frist value x : ");
	scanf("%d",&x);
	printf("Enter the second value y : ");
	scanf("%d",&y);
	pen=x/y;
	printf("The pen is :%d\n",pen);
	return 0;
}
