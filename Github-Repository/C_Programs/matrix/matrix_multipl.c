#include<stdio.h>

int main()
{
	int i,j,k,n=3;
	int a[3][3],b[3][3],c[3][3];
	
	printf("enter the first matrix\n\n");
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("enter the second matrix\n\n");
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}

//-------------------------------------------------------------------------------------	
//matrix print
	printf("first matrix is\n\n");
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	
	printf("second matrix is\n\n");
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
//-------------------------------------------------------------------------------------
//matrix multiplication
	
	printf("matrix multiplication is \n\n");

	for(i=0 ; i<n ; i++)
	{
		
		for(j=0 ; j<n ; j++)
		{
			c[i][j]=0;
			for(k=0 ; k<n ; k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
		
	}
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{			
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
}
