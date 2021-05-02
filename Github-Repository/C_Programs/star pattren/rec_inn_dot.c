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

			if((i==1)||(i==n)||(j==1)||(j==n))
			{
				printf("*");
			}		
			else if ((j==n/2)&&(i==n/2))
			{
				printf("*");	

			}			
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}
