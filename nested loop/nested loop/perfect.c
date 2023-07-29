//2.Draw a flowchart to find the perfect numbers within a given number of range 1 to 15.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int i=1;
	while (i<=n)
	{
		int j=1,sum=0;
		while (j<i)
		{
			if (i%j==0)
			{
				sum=sum+j;
			}
			j++;
		}
		if (sum==i)
		{
			printf("%d\n",i);
		}
		i++;
	}
	printf("\n");
	return 0;
}

/*#include<stdio.h>

int main() {
    int n, sum;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Perfect numbers within the range 1 to %d:\n", n);
    for (int num = 1; num <= n; num++) {
        sum = 0;

        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}*/
		
