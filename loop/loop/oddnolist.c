//40. write a program to print only odd numbers from the given list using loop.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a;
	printf("Enter the input : ");
	scanf("%d",&a);
		if (a%2!=0){
			printf("%d\n",a);
	    	}
	}
	return 0;
}

 
