//27.write a program to display sum of odd number and even number separately that fall between two numbers accepted from the user.(including both number)
#include<stdio.h>
int main()
{
	 int n, i;
    	 int oddSum = 0, evenSum = 0;

    	printf("Enter the value of n: ");
    	scanf("%d", &n);

   	 for (i = 1; i <= n; i++) {
         if (i % 2 == 0) {
            evenSum += i;
         } else {
            oddSum += i;
         }
         }

    printf("Sum of odd numbers from 1 to %d: %d\n", n, oddSum);
    printf("Sum of even numbers from 1 to %d: %d\n", n, evenSum);
    return 0;
}
