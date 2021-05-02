#include<stdio.h>

int main()
{
	int i,j,k,n;
	printf("enter the no to print patrren \n");
	scanf("%d",&n);
	for(i=0 ; i<n/2 ; i++)
	{
		for(j=0 ; j<i ; j++)
		{
			printf(" ");	
		}
		for(k=i ; k<n-1-i ; k++)
		{
			printf("*");

		}
			printf("\n");
	}
}

