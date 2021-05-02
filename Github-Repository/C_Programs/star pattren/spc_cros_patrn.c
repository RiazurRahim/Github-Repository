#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter no\n");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if((i==j)||(j==n-1-i))
				printf(" ");
			else
				printf("*");

		}
		printf("\n");
	}
}
