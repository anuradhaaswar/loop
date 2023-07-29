//5.write a program to find the sum of all prime numbers between 1 to n.
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	int i=1;
	int count=0,sum=0;
	while (i<=n)
	{
		if (n%i==0)
			{
				count=count+1;
			}
			i++;
	}
	if (count==2)
	{
		sum=sum+i;
	}
		printf("prime number\n");
	
	else
	{
		printf(" not prime number\n");		
	}
	printf("\n");
	return 0;	
}	
*/	
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }

    printf("The sum of all prime numbers between 1 to %d is: %d\n", n, sum);
    return 0;
}
	
	
