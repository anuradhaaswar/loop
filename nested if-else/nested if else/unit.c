//3.construct a flowchart to input electricity unit charges and calculate the total electricity bill according to the given condition.
#include<stdio.h>
int main()
{
	float u,charges,surcharge,bill;
	printf("Enter unit : ");
	scanf("%f",&u);
	if (u<=50)
	{
		charges=u*0.50;
		surcharge=(20*charges)/100;
		bill=charges+surcharge;
	}
	else if (u>50&&u<=150)
	{
		charges=(50*0.50)+(u-50)*0.75;
		surcharge=(20*charges)/100;
		bill=charges+surcharge;
	}
	else if (u>150&&u<=250)
	{
		charges=(50*0.50)+(100*0.75)+(u-150)*1.20;
		surcharge=(20*charges)*100;
		bill=charges+surcharge;
	}
	else  
	{							
		charges=(50*0.50)+(100*0.75)+(100*1.20)+(u-250)*1.50;
		surcharge=(20*charges)/100;
		bill=charges+surcharge;
	}
	printf("total bill=%f\n",bill);
	return 0;
}
	 
	
