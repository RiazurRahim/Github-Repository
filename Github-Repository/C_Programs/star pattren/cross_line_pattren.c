#include<stdio.h>
int main()
{
	int i,n,j,k;
	printf("enter the no to print the star patteren\n");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		for(j=1 ; j<=n ; j++)
		{
			if((i==j)||(j==n-i+1))
			       	printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
