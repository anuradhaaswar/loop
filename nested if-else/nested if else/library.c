//6.accept the number of day from the user and calculate the charge for the library according to the following.
#include<stdio.h>
int main()
{
	int day,charges;
	printf("Enter day : ");
	scanf("%d",&day);
	if (day<=5)
	{
		charges=day*2;
	}
	else if (day>5&&day<=10)
	{
		charges=(5*2)+(day-5)*3;
	}
	else if (day>=10&&day<=15)
	{
		charges=(5*2)+(5*3)+(day-10)*4;
	}
	else 
	{
		charges=(5*2)+(5*3)+(5*4)+(day-15)*5;
	}
	printf("charges=%d\n",charges);
	return 0;
}
	
