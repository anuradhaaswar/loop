//5. construct the flowchart to show how the steps in finding the simple interest on a given amount at a given rate of interest.
#include<stdio.h>
int main()
{
	int p,r,t,si;
	printf("Enter of p : ");
	scanf("%d",&p);
	printf("Enter of r : ");
	scanf("%d",&r);
	printf("Enter of t : ");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("The simple interest is :%d\n",si);
	return 0;
}	
