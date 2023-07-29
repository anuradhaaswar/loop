//18.frist 10 even number.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	for (int i=2;i<=n;i++){
	if (i%2==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
