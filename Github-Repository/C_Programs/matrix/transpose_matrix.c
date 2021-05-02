//transpose of matrix

#include<stdio.h>

int main()
{
	int i,j;
	int a[3][4];


	//first matrix
		
	printf("enter the matrix \n\n");
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("matrix entered is \n\n");
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("transpose of  matrix \n\n");
		
	for(j=0 ; j<4 ; j++)
	{
		for(i=0 ; i<3 ; i++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
