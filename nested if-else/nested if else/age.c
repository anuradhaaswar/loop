//5.accept the age,gender (male and female) and the number of days and display the wages accordingly if age does not fall in any range then diplay the following massage.
#include<stdio.h>
int main()
{
	int age,male,female,day,wage;
	printf("Enter the age : ");
	scanf("%d",&age);
	char gender;
	printf("Enter the gender : ");
	scanf("%c",&gender);
	printf("Enter the day : ");
	scanf("%d",&day);
	if (age>=18&&age<30)
	{
	   if (gender=='m')
	   {
		wage=day*700;
		printf("wage=%d\n",wage);
	   }
	}  
	   else
	   {
	   	wage=day*750;
	   	printf("wage=%d\n",wage);
	   }
	
	   if (age>=30 && age<=40)
	{
	  if (gender=='m')
	  {
	  	wage=day*800;
	  	printf("wage=%d\n",wage);
	  }
	else
	   {
		wage=day*850;
		printf("wage=%d\n",wage);
	   }
        }
	else
	{
		printf("enter appropriate age\n");
	}
	return 0;
}	
	
	
