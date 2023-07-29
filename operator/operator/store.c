// 30. a store sells vadapav & samosas .They want a system where they enter the number of vadapav (v) and samosas (s) a custoumer busy and a bill with the final price is automically calculated and displayed. Avadapav cost 23 Rs while a samosas costs 15Rs. Write a program to create such a system.
#include<stdio.h>
int main()
{
	int vada,samo,bill;
	printf("Enter the no.of vada : ");
	scanf("%d",&vada);
	printf("Enter the no.of samo : ");
	scanf("%d",&samo);
	bill=vada*12+samo*15;
	printf("The bill is  :%d\n",bill);
	return 0;
}	

