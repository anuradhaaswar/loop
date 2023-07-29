//20.write a while loop statement to print the following series 105,98,91,...7.
#include<stdio.h>
int main()
{
	int i=105;
	while (i>0)
	{
		printf("%d ",i);
		i=i-7;
	}
	return 0;
}
