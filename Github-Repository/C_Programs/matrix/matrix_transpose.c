#include<stdio.h>

void swap(int *c,int *d)
{
	int temp;
	temp = *d;
	*d = *c;
	*c = temp;
}

int main()
{
	int i,j,n;
	FILE *file;
	int a[3][3] =  
		
	printf("enter size of matrix \n");
	scanf("%d",&n);
/*
	printf("enter the 1st matrix \n");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	*/
	printf("entered matrix is \n\n\n");

	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n\n");
	}

	printf("transpose of matrix is \n\n\n");
	for(i=0 ; i<n ; i++)
	{
		for(j=i ; j<n ; j++)
		{
			swap(&a[i][j],&a[j][i]);
		}

	}

	file = fopen("image.pgm", "wb");
	/*Add image headers*/
	fprintf(file, "P2 \n");
	fprintf(file, "%d %d \n", n, n);
	fprintf(file, "255 \n");

	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d\t",a[i][j]);
			/* Write data to file */
			fprintf(file, "%d ", a[i][j]);
		}
		printf("\n\n\n");
		fprintf(file, "\n");
	}
	fclose(file);

}
