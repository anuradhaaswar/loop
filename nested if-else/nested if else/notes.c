//7.you have denominations of rupee notes in the following from 1,2,5,10,20,100,200,500,2000,take any amount from the user and print the minimum number of notes needed to add up to that number.
#include<stdio.h>
int main()
{
	int notes,k,count;
	printf("Enter notes : ");
	scanf("%d",&notes);
	if (notes>=2000)
	{
		k=notes/2000;
		count=count+k;
		notes=notes%2000;
	}
	else if (notes>=500)
	{
		k=notes/500;
		count=count+k;
		notes=notes%500;
	}
	else if (notes>=200)
	{
		k=notes/200;
		count=count+k;
		notes=notes%200;
	}
	else if (notes>=100)
	{
		k=notes/100;
		count=count+k;
		notes=notes%100;
	}
	else if (notes>=20)
	{
		k=notes/20;
		count=count+k;
		notes=notes%20;
	}
	else if (notes>=10)
	{
		k=notes/10;
		count=count+k;
		notes=notes%10;
	}
	else if (notes>=5)
	{
		k=notes/5;
		count=count+k;
		notes=notes%5;
	}
	else if (notes>=2)
	{
		k=notes/2;
		count=count+k;
		notes=notes%2;
	}
	else if (notes>=1)
	{
		k=notes/1;
		count=count+k;
		notes=notes%1;
	}
	printf("count=%d\n",count);
	return 0;
}
