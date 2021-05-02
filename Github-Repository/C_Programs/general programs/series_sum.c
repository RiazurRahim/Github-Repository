#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the no to print series \n");
	scanf("%d",&n);
	printf(" 1");
	for(i=2 ; i<=n ; i++)
	{
		printf(" + 1/%d",i);
	}
	for(i=1 ; i<=n ; i++)		//this is not correct
	{
	
		sum = sum+i;
	}
	printf("\n sum = 1/%d",sum+1/n);
}
