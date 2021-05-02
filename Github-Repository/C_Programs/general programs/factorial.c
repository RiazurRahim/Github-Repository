//factorial of a number

#include<stdio.h>
int main()
{
	int n,fact=1,i;
	printf("enter the no \n");
	scanf("%d",&n);
	printf("no is %d \n",n);
	for(i=1 ; i<=n ; i++)
	{
	fact=fact*i;
	}
	printf("factorial of given no is %d",fact);


}
