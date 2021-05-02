#include<stdio.h>
int main()
{
	int i,n,j,k;
	printf("enter the no to print the star patteren");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n-1-i ; j++)
		{
		       	printf(" ");
		}
		for(k=0 ; k<i+1 ; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
