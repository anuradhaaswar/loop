//29.write a program to accet numbers from the user and display the smallest number.
#include<stdio.h>
int main()
{
	int n,min;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Enter the input : ");
	scanf("%d",&min);
	for (int i=1;i<n;i++){
	int a;
	printf("Enter the input : ");
	scanf("%d",&a);
		if (a<min)
		{
			min=a;
		}
	}
		printf("min=%d\n",min);
	
	return 0;
}
		
