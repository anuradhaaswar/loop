//8.construct a flowchart to categorize the shape of a quadrilateral as either a square,rhombus,rectangle,parallelogram or irregular quadrilateral having input the length of the four sides and internal angles.
#include<stdio.h>
int main()
{
	int ab,bc,cd,da,angle;
	printf("Enter the angale : ");
	scanf("%d",&angle);
	if (ab==bc&&bc==cd&&cd==da)
	{	
		if (angle==90)
		{
			printf("square\n");
		}
		else 
		{
			printf("rhombus\n");
		}
	}
	else if (ab==cd&&da==bc)
	{
		if (angle==90)
		{
			printf("rectangle\n");
		}
		else
		{
			printf("parallelogram\n");
		}
	}
	printf("irregular quadrilateral\n");
	return 0;
}
	
