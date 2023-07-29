//22.write a program to print table of a number entered from the user.
#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter the value : ");
	scanf("%d",&i);
	printf("Enter the value : ");
	scanf("%d",&j);
	for (;i<=j;i++) 
	{
   
        for (int p = 1; p <= 10; p++) 
        {
            printf("%d x %d = %d\n", i, p, i * p);
        }
        printf("\n");
        }
        return 0;
}

