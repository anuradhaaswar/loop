/*//1.write a program to print a solid square pattern of n raw and m columns using the asterisk character (*) where integer N is as given as an input.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the rows : ");
	scanf("%d",&n);
	int m;
	printf("Enter the columns : ");
	scanf("%d",&m);
	for (int i=1;i<=n;i++){
	    for (int i=1;i<=m;i++){ 
	    	printf("*");
	    }
	printf("\n");
	}
	return 0;
}
*/
/*//2.given two integers m and n write a program to print a solid rectangle pattern of a m row and n columns using the asterisk character (*).
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the rows : ");
	scanf("%d",&n);
	int m;
	printf("Enter the columns : ");
	scanf("%d",&m);
	for (int i=1;i<=n;i++){
	    for (int i=1;i<=m;i++){ 
	    	printf("* ");
	    }
	printf("\n");
	}
	return 0;
}
*/
/*//3.given an interger number (N) as input write a program to print the right-angled triangular pattern of N lines using an asterisk (*) character.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	     for (int j=1;j<=i;j++){
	     	printf("* ");
	     }
	     printf("\n");
	}
	return 0;
}
*/
/*//4.write a program to print a rectangle of M row and N columns using the plus character (+).
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	int m;
	printf("Enter the columns : ");
	scanf("%d",&m);
	for (int i=1;i<=n;i++){
	    for (int i=1;i<=m;i++){ 
	    	printf("+ ");
	    }
	printf("\n");
	}
	return 0;
}
*/
/*//5.solid right angled triangle -2 given an integer number N as input. write a program to print the double triangular pattern of n lines using an arterisk (*) charcter as show below. note (tere is a space aftr each asterisk * charcter.
#include<stdio.h>
int main()
{
	int n; 
	printf("Enter the row : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	     for (int j=1;j<=i;j++){
	     	printf("* ");
	     }
	     printf("\n");
	}
	for (int a=1;a<=n;a++){
	     for (int g=1;g<=a;g++){
	     	printf("* ");
	    	}
	     printf("\n");
	}
	return 0;
}
*/
/*//6.write a program to print a hollow square pattern of a n rows and n columns using the asterisk character (*) where integer N is given as an given.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
             {
			printf("* ");
	     }
	    else 
	    {
	    	printf("  ");
	    }
	   }
	   printf("\n");
	}
	   return 0;
}
*/	    
/*//7.given an integer number N as input write a program to print the hollow-right-angled triangular pattern of N lines as shown below.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
	   for (int a=1;a<=i;a++) 
	   {
	   	printf("* ");
	   }
	   for (int j=1;j<=i;j++) 
	   {
	   	printf("  ");
	   }
	 }
	 printf("\n");
	 return 0;
}
*/
/*
  8. * * * * *
     * * * *
     * * *
     * *
     *.
    */ 
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++){
	     for (int j=1;j<=a;j++){
	     	printf("* ");
	     }
	     a--;
	     printf("\n");
	}
	return 0;
}	   
*/	   
/*
  9.     *
       * *
     * * *
   * * * *.
   */
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	     for (int j=1;j<=n-i;j++){
	     	printf("  ");
	     }
	 	for (int k = 1; k <= i; k++) 
	     {
	     	printf("* ");
	     }
	     printf("\n");
	}
	return 0;
}	     	
*/
//10.     
/*           
		       *
       		     *   *
       		   *   *   *
       		 *   *    *   *
       	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
    	for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++) 
        {
            printf("  ");
        }
        for (int k=1;k<=2*i-1;k++) 
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
*/
//11.
/*
	* * * *
	 * * *
	  * *
	   *
*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
    	for (int i=1;i<=n;i++){
        for (int j=1;j<i;j++) 
        {
            printf(" ");
        }
        for (int k=1;k<=n-i;k++) 
        {
            printf("* ");
        }
	
        
        printf("\n");
    }

    return 0;
}
*/
//12.
	/* 1
	   1 2 
	   1 2 3
	   1 2 3 4
	   1 2 3 4 5
	   */
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	for (int j=1;j<=i;j++)
	{
		printf("%d",j);
	}
	printf("\n");
	}
	return 0;
}	   
*/
//13.
     /* 
         5 5 5 5 5		   
	 4 4 4 4
	 3 3 3
	 2 2 
	 1 
		*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++){
	for (int j=1;j<=a;j++) 
	{
		printf("%d ",a);
	}
	a--;
	printf("\n");
	}
	return 0;
}	   	
*/
//14.
       /*
          1
          2 2
          3 3 3
          4 4 4 4
          5 5 5 5 5
          */
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	for (int j=1;j<=i;j++)
	{
		printf("%d",i);
	}
	printf("\n");
	}
	return 0;
}	   
*/	
//15.
	/*   1 2 3 4 5 
	     6 7 8 9 10
	     11 12 13 14 15
	     16 17 18 19 20 
	     21 22 23 24 25
	     */
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
j	scanf("%d",&n);
	int a=1;
	for (int i=1;i<=n;i++){
	for (int j=1;j<=n;j++)
	{
		printf("%d ",a);
		a++;
	}
	printf("\n");
	}
	return 0;
}
*/	
//16.
	/*
		1
		2 3
		4 5 6
		7 8 9 10
		*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	int a=1;
	for (int i=1;i<=n;i++){
	for (int j=1;j<=i;j++)
	{
		printf("%d ",a);
		a++;
	}
	printf("\n");
	}
	return 0;
}
*/
//17. 
	/*
		1 1 1 1
		2 2 2 2
		3 3 3 3
		4 4 4 4
		*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	for (int j=1;j<=n;j++)
	{
		printf("%d ",i);
	}
	printf("\n");
	}
	return 0;
}
*/
//18.
	/*
		1 2 3 4 
		1 2 3 4 
		1 2 3 4 
		1 2 3 4
		*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	for (int j=1;j<=n;j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	}
	return 0;
}			
*/
//19.
	/*
	5
	4 4 
	3 3 3
	2 2 2 2 
	1 1 1 1 1
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++){
	for (int j=1;j<=i;j++)
	{
		printf("%d ",a);
	}
	a--;
	printf("\n");
	}
	return 0;
}			
*/
//20.
	/*
		5
		5 4
		5 4 3
		5 4 3 2
		5 4 3 2 1
		*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a=n;
	for (int j=1;j<=i;j++)
	{
		printf("%d ",a);
		a--;
	}
	printf("\n");
	}
	return 0;
}			
*/
//21.
/*	
	5 4 3 2 1 
	5 4 3 2
	5 4 3
	5 4
	5
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	for (int j=n;j>=i;j--)
	{
		printf("%d ",j);
	}
	printf("\n");
	}
	return 0;
}			
*/
//22.
/*
	 4 4 4 4
	 3 3 3 3
	 2 2 2 2
	 1 1 1 1
	 */
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the rows : ");
	scanf("%d",&n);
	for (int i=n;i>=1;i--){
	for (int j=1;j<=n;j++)
	{ 
		printf("%d ",i);
	}
	printf("\n");
	}
	return 0;
}
*/
//23.
/*
	1 2 3 4 5
	1 2 3 4
	1 2 3
	1 2
	1
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the row : ");
	scanf("%d",&n);
	for (int i=n;i>=1;i--){
	for (int j=1;j<=i;j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	}
	return 0;
}			
*/
//24.
/*
	1
	1 0
	1 0 0 
	1 0 0 0
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the rows : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a=1;
	int b=0;
	for (int j=1;j<=i;j++)
	{
		printf("%d",a);
		a=b;
	}
	printf("\n");
	}
	return 0;
}
*/
//25.
/*
	0 1 2 3 4 5
	0 1 2 3 4
	0 1 2 3
	0 1 2
	0 1
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the rows : ");
	scanf("%d",&n);
	for (int i=n;i>=1;i--){
	for (int j=0;j<i;j++)
	{
		printf("%d",j);
	}
	printf("\n");
	}
	return 0;
}	
*/
//26.
/*
	1
	1 3
	1 3 5
	1 3 5 7
	1 3 5 7 9	
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the rows : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a=1;
	for (int j=a;j<=i;j++)
	{
		printf("%d",a);
		a+=2;
	}1
	printf("\n");
	}
	return 0;
}
*/
//27.
/*
	1 3 5 7 9
	1 3 5 7
	1 3 5
	1 3
	1
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the rows : ");
	scanf("%d",&n);
	for (int i=n;i>=1;i--){
	int a=1;
	for (int j=1;j<=i;j++)
	{
		printf("%d",a);
		a+=2;
	}
	printf("\n");
	}
	return 0;
}
*/	
//28.
/*
	1
	3 3 
	5 5 5 
	7 7 7 7
	9 9 9 9 9
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the rows : ");
	scanf("%d",&n);
	int a=1;
	for (int i=1;i<=n;i++){
	for (int j=1;j<=i;j++)
	{
	for (int i=1;i<=n;i++){
	int k=i;
	for (int j=1;j<=k;j++)
	{
		printf("%d ",k);
	}
	k--;
	printf("\n");	printf("%d",a);
	}
	a+=2;
	printf("\n");
	}
	return 0;
}
*/
//29.
/*
	1
	2 1  
	3 2 1
	4 3 2 1
	5 4 3 2 1
	*/
/*#include<stdio.h>
int main()
{
	int n;
	int i=1; 
	printf("Enter the rows : ");
	scanf("%d",&n);
	while (i<=n)
	{
		int j=1,k=i;
		while (j<=i)
		{
			printf("%d",k);
			k--;
			j++;
		}
	printf("\n");
	i++;
	}	
	return 0;
}
*/
//30.
/*
	5 4 3 2 1
	4 3 2 1
	3 2 1
	2 1
	1
	*/
/*#include<stdio.h>
int main()
{
	int n;
    	printf("Enter the rows: ");
    	scanf("%d", &n);

    	int i, j;
    	for (i = n; i >= 1; i--) {
            for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
*/
//31.
/*
	1 2 3
	2 3
	1
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number rows : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	for (int j=i;j<=n;j++)
	{
		printf("%d",j);
	}
	printf("\n");
	}
	return 0;
}
*/
//32.
/*
	1
	3 2
	6 5 4
	10 9 8 7
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number rows : ");
	scanf("%d",&n);
	int num = 1;
    	for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}
*/
//33.
/*
	   1
	 1 2
       1 2 3
     1 2 3 4 
     */
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number rows : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	for (int j=1;j<=n-i;j++)
	{
		printf("  ");
	}
	for (int a=1;a<=i;a++)
	{
		printf("%d ",a);
	}
	printf("\n");
	}
	return 0;
}
*/
//34.
/*
	0
	2 4
	4 8 8
	8 16 16 16
	16 32 32 32 32
	*/
/*#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter the number rows : ");
	scanf("%d",&n);
	printf("0\n");
	int i=1;
	while (i<n){
	int j=1;
	int a;
	a=pow(2,i);
	while (j<=i+1){
	while (j==1)
	{
		printf("%d ",a);
		j++;
	}
	
	}
	{	
		printf("%d",2*a);
		j++;
	}
		i++;
	printf("\n");
	}
	return 0;
}
*/
//35.
/*
	5 5 5 5 5 
	5 5 5 5
	5 5 5
	5 5 
	5 
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number rows : ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++){
	for (int j=1;j<=a;j++)
	{
		printf("%d ",n);
	}
	a--;
	printf("\n");
	}
	return 0;
}
*/
//36.
/*
	1*2*3*4*5
	1*2*3*4
	1*2*3
	1*2
	1
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the numbers rows : ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++){
	for (int j=1;j<a;j++)
	{
		printf("%d * ",j);
	}
	a--;	
	printf("\n");
	}
	return 0;
}
*/
//37.
/*
	10
	10 8 
	10 8 6
	10 8 6 4
	10 8 6 4 2
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter rthe numbers rows : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	int a=10;
	for (int j=1;j<=i;j++)
	{
		printf("%d ",a);
		a-=2;
	}
	printf("\n");
	}
	return 0;
}
*/
//38.
/*
	1 3 5 7 9
	3 5 7 9 
	5 7 9
	7 9
	9
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number row : ");
	scanf("%d",&n);
	int k=1;
	int m=n;
	for (int i=1;i<=n;i++){
	int a=k;
	for (int j=1;j<=m;j++)
	{
		printf("%d ",a);
		a+=2;
	}
	k+=2;
	m--;
	printf("\n");
	}
	return 0;
}
*/
//39.
/*
	1
	1 2 1
	1 2 3 2 1
	1 2 3 4 3 2 1
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number row : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	for (int j=1;j<=i;j++)
	{
		printf("%d ",j);
	}
	for (int k=i-1;k>0;k--)
	{
		printf("%d ",k);
	}
	printf("\n");
	}
	return 0;
}
*/
//40.
/*
	1 2 3 4 5
	2 2 3 4 5
	3 3 3 4 5
	4 4 4 4 5
	5 5 5 5 5
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number row : ");
	scanf("%d",&n);
	int i=1;
	while (i<=n){
	int j=1;
	while (j<i){
	printf("%d ",i);
	j++;
	}
	while (j<=n)
	{
		printf("%d ",j);
		j++;
	}
	i++;
	printf("\n");
	}
	return 0;
}
*/
//41.
/*
	1 
	2 4 
	3 6 9
	4 8 12 16
	5 10 15 20 25 
	6 12 18 24 30 36
	7 14 21 28 35 42 49
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number rows : ");
	scanf("%d",&n);
	int table;
	for (int i=1;i<=n;i++){
	for (int j=1;j<=i;j++)
	/*
	 5 4 3 2 1 1 2 3 4 5{
		table=j*i;
		printf("%d ",table);
	}
	printf("\n");
	}
	return 0;
}
*/
//42.
/*
	 5 4 3 2 1 1 2 3 4 5	 
	 5 4 3 2     2 3 4 5
	 5 4 3         3 4 5
	 5 4             4 5
	 5                 5 
	 */
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number rows : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	for (int j=n;i<=j;j--)
	{
		printf("%d ",j);
	}
	for (int s=1;s<i;s++)
	{
	printf("    ");
	}
	for (int m=i;m<=n;m++)
	{
		printf("%d ",m);
	}
	printf("\n");
	}
	return 0;
}
*/
//43.
/*
	 5 4 3 2 1 1 2 3 4 5
	 5 4 3 2   2 3 4 5
	 5 4 3     3 4 5
	 5 4       4 5
	 5         5 
	 */
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number rows : ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	for (int j=n;i<=j;j--)
	{
		printf("%d ",j);
	}
	for (int s=1;s<i;s++)
	{
	printf("  ");
	}
	for (int m=i;m<=n;m++)
	{
		printf("%d ",m);
	}
	printf("\n");
	}
	return 0;
}
*/
//44.
/*
	1
	2 3 4
	5 6 7 8 9
	10 11 12 12 13 14 15 16
	*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number rows : ");
	scanf("%d",&n);
	int a=1;
	int k=1;
	for (int i=1;i<=n;i++){
	for (int j=1;j<=a;j++)
	{
		printf("%d ",k);
		k++;
	}
	a+=2;
	printf("\n");
	}
	return 0;
}
*/
//45.
/*
	0
	1 0 1
	2 1 0 1 2
	3 2 1 0 1 2 3
	4 3 2 2 1 0 1 2 3 4 
	*/
#include<stdio.h>
int main()
{
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		

			
	
	
			
	
	
	
	
	
	
	
	
	
			
	
	
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
		
	
	
	
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	
	
	
	
	
	
	
		
	
	
	
	        

