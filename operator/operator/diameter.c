// 15. Given the circumference of a circle , construct the flowchart to calculate the diameter.(input thecircumference of the circle from the user)
#include<stdio.h>
int main()
{
	int r, diameter;
	printf("Enter the value r : ");
	scanf("%d",&r);
	diameter=(2)*r;
	printf("The diameter is :%d\n",diameter);
	return 0;
}
