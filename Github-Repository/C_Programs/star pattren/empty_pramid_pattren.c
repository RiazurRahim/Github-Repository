//empty pramid pattren

#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter the no\n");
	scanf("%d",&n);

	for(i=2;i<=n+2;i++)
	{
		
		for(j=-2;j<=2*n;j++)
		{
			if((j<=n-i)||(j>=n-2+i))
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
	
