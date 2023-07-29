//19.frist 10 odd number.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	if (i%2!=0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
