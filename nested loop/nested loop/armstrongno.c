//3.Draw a flowchart to print armstrong number within a given rang 1 to 200.
#include<stdio.h>
int main()
{
	int n,p,arm;
	printf("Enter the number : ");
	scnaf("%d",&n);
	for (int i=n;n>0;i++){
	p=i%10;
	arm=arm+(p*p*p);
	i=i/10;
	}
		if (i==arm)
			{
				printf("i is armstrong number\n");
			}
		else 
			{
				printf("i is not armstrong number\n");
			}
	return 0;
}
	
	
	
