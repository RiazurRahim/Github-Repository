//Multiplication of matrix

#include<stdio.h>
void main()
{
	int i,j,k,n;
	int a[3][3],b[3][3],c[3][3];
	printf("enter the matrixes\n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix\n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("matrixes are\n");

	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	printf("second matrix is \n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
						
			printf("%d\t",b[i][j]);

		}
		printf("\n");
	}
	printf("matrix multiplication\n");
	
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d\t",c[i][j]);

		}
		printf("\n");
	}


}
	
