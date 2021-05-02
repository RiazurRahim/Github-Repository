#include<stdio.h>

int main()
{
	int i,j,k,n;

	printf("enter the no to print the pattren\n");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(((i==3)&&(j>=3)&&(j<=n-4))||((i==n-4)&&(j>=3)&&(j<=n-4))||((j==3)&&(i>=3)&&(i<=n-4))||((j==n-4)&&(i>=3)&&(i<=n-4)))
			
				printf("*");
			
			
			else
			
				printf(" ");
			
					
		}
		printf("\n");
       }
}
