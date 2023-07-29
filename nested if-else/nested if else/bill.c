//4.construct a flowchart to calculate the electricity bill (accept the number of units from the user) according to the following criteria.
#include<stdio.h>
int main()
{
	int unit,bill;
	printf("Enter the unit : ");
	scanf("%d",&unit);
	if (unit>=100)
	{
		bill=unit;
	}
	else if (unit>100&&unit<=200)
	{
		bill=(unit-100)*5;
	}
	else
	{
		bill=(100*5)+(unit-200)*10;
	}
	printf("bill=%d\n",bill);
	return 0;
}
	 
