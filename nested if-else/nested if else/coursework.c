//9.the grades in certain class are determined by coursework and a written examination both components of the assesment carry a maximum of 50 points.
#include<stdio.h>
int main()
{
	int coursework,written,total;
	printf("Enter the coursework exam : ");
	scanf("%d",&coursework);
	printf("Enter the written mark exam : ");
	scanf("%d",&written);
	total=coursework+written;
	if (coursework<20 && written>20)
	{
		printf("tecnical fail\n");
	}
	else if (coursework<20 && written>20)
	{
		printf("tecnical fail\n");
	}
	else if (total>=45)
	{
		printf("pass\n");
	}
	else if (total>=44)
	{
		printf("pass\n");
	}
	else
	{
		printf("fail\n");
	}
	return 0;
}
	
		
		
