//39.write a c to find those numbers which are divisible by 7 &multiple of 5,between 1500 and 2700.
#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter the m : ");
	scanf("%d",&m);
	printf("Enter the n : ");
	scanf("%d",&n);
	for (int i=m;i<=n;i++){
	if (i%7==0){
		if (i%5==0){
			printf("Divisible %d\n",i);
		}
	   }
	}
	return 0;
}
