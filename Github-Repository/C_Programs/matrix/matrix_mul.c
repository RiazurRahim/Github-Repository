//matrix multiplication by using functions
//program incorrect
#include<stdio.h>
int n;
int a[5][5],b[5][5],c[5][5];

int mul (int i , int j )
{
	int mul=0, k;
	for(k=0 ; k<n ; k++)
	{
		mul = mul + a[i][k]*b[k][j];
	}
	return mul;
}

int main()
{
	int i,j,k;

	printf("enter size of matrix\n");
	scanf("%d",&n);


	
	printf("enter the 1st matrix\n");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
			scanf("%d",&a[i][j]);

	}

	
	printf("enter the 2nd matrix\n");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
			scanf("%d",&b[i][j]);
	}
	
	//First Matrix	
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
	//Second Matrix
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

	 printf("multiplcation of matrix\n");
	
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			c[i][j] = mul(i,j);
			printf("%d\t",c[i][j]);

		}
		printf("\n");
	}

}