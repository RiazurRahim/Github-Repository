//star pramid pattren 

#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter the no\n");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		
		for(j=0;j<=2*n;j++)
		{
			if((j>=n-i)&&(j<=n-2+i)&&k)
			{
				printf("*");
				k=0;
			}
			else
			{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}
}
