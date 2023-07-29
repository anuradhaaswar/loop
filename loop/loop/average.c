//7. write a program to print the sum and average of the given ten numbers. average is the number of given numbers.
#include<stdio.h>
int main()
{
	int n,sum,avg;
	printf("Enter the n : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a;
	printf("Enter the a : ");
	scanf("%d",&a);
	sum=sum+2;
	}
	printf("sum=%d\n",sum);
	avg=sum/n;
	printf("avg=%d\n",avg);
	return 0;
}
