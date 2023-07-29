//4.Develop a flowchart to input a number N.and print frist N prime number.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	int i=1;
	int count=0;
	while (i<=n)
	{
		if (n%i==0)
			{
				count=count+1;
			}
			i++;
	}
	if (count==2)
	{
		printf("prime number\n");
	}
	else
	{
		printf(" not prime number\n");		
	}
	printf("\n");
	return 0;	
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
				
