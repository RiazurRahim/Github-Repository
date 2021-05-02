#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the no \n");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if((j<n-i-1)&&(j<i))
				printf("*");
			else
			printf(" ");

		}
		printf("\n");
		
	}
}
