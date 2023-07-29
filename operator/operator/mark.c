// 28.construct a flowchart to calculate the total marks obtained by a student in examation.(subject :-hindi,math,science,computer,english)
#include<stdio.h>
int main()
{
	int a,b,c,d,e,mark;
	printf("Enter the frist value a : ");
	scanf("%d",&a);
	printf("Enter the second value b : ");
	scanf("%d",&b);
	printf("Enter the third value c : ");
	scanf("%d",&c);
	printf("Enter the fourth value d : ");
	scanf("%d",&d);
	printf("Enter the fifth value e : ");
	scanf("%d",&e);
	mark=a+b+c+e+d;
	printf("mark=%d\n",mark);
	return 0;
}
