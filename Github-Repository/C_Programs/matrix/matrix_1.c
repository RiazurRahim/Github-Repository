//matrix printing

#include<stdio.h>
int main()
{
	int i,j,k,n=3;
	int a[3][3],b[3][3];

	printf("enter the 1st matrix\n");
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		scanf("%d",&a[i][j]);
	}
	printf("enter 2nd matrix\n");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		scanf("%d",&b[i][j]);
	}
	
	
	printf("\nPrint 1st matrix\n");
	printf("\n\n");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("Print 2nd matrix\n");
	printf("\n\n");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}	
}
