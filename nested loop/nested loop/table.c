//1.print 1 to 5 table.
#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter the n : ");
	scanf("%d",&n);
	printf("Enter the m : ");
	scanf("%d",&m);
	for (n;n<=m;n++)
	{
		for (int j=1;j<=10;j++)
		{
			printf("%d * %d = %d\n",n,j,n*j);
		}
		printf("\n");
	}
	return 0;
}
