/*10 Program to print the sum of digits of any number*/
#include<stdio.h>
int main(void)
{
	int n,sum=0,rem;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n>0)
	{
		rem = n%10;	
		sum+=rem;
		n/=10;		
	}
	printf("Sum of digits=%d\n",sum);
	return 0;
}
