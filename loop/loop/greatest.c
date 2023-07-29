//11.write a program to print the greatest among the given N numbers.
#include<stdio.h>
int main()
{
	int n,max=0;
	printf("Enter the value n : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a;
	printf("Enter the value a : ");
	scanf("%d",&a);
		
		if (a>max)
		{
			max=a;
		}
		printf("max=%d\n",max);
	}
	return 0;
}
	
