//2.validate a given year (Hints the year in the date must be greater than zero the month must lie between 1 and 12 and the day must lie between 1 ans 31 depending on the month number.)
#include<stdio.h>
int main()
{
	int year,month,day;
	printf("Enter the year : ");
	scanf("%d",&year);
	printf("Enter the month : ");
	scanf("%d",&month);
	printf("Enter the day : ");
	scanf("%d",&day);
	if (year>0 && 0>month<=12 && 0>day<=31)
	{
		printf("validate year\n");
	}
	else
	{
		printf("invalidate year\n");
	}
	return 0;
}
