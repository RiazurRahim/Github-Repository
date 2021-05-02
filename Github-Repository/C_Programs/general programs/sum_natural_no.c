//sum of n natural nos

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the no, to print sum of natural no --> \n");
	scanf("%d",&n);
	for(i=1 ; i<=n ; i++)
	{
		printf("%d \n",i);
		
		sum = sum+i;
	}
	printf("\nsum of natural nos %d \n",sum);
}
