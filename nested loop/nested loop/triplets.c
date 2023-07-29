//6.given a number N draw a flowchart to print the count of triplets containing numbers A,B and c from 1 to n such that the sum of the number is equal to N Where a<b<c Ais the frist number,B is the second number and c is the thrid number in a triplet for example, if the given number is n=10,A+B+c=n.
/*#include<stdio.h>
int main()
{
	int n,a=1,count=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	while (a<=10){
	int b=a+1;
	while (b<=10){
	int c=b+1;
	while (c<=10){
	if (a+b+c==n)
		{
			count=count+1;
		}
		c++;
		}
	     }
	     b++;
	}
	a++;
	printf("%d\n",count);
	
	return 0;
}
*/
#include <stdio.h>

int main() {
    int n, a = 1, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    while (a <= n - 2) {  // Ensure that 'a' doesn't go beyond n-2 to leave room for 'b' and 'c'
        int b = a + 1;
        while (b <= n - 1) {  // Ensure that 'b' doesn't go beyond n-1 to leave room for 'c'
            int c = b + 1;
            while (c <= n) {
                if (a + b + c == n) {
                    count = count + 1;
                }
                c++;
            }
            b++;
        }
        a++;
    }
    printf("%d\n", count);
    
    return 0;
}
	
	
	
