//30.write a program to reverse the number accepted by user .
#include<stdio.h>
int main()
{
	int n,a,sum=0;
	scanf("%d",&n);
	int b=n;
	while (b>0)
	{
		a=b%10;
		sum=a+(sum*10);
		b=b/10;
	}
		printf("%d\n",sum);
		return 0;
}
	

	
