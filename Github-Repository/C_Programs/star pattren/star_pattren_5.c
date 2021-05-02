# include<stdio.h>
int main()
{
	int i,j,n,x;
	long int k;

	printf("enter the no\n");
	scanf("%d",&n);
	for(i=1 ; i<n ; i++)
	{
		for(j=1 ; j<n-i+2 ; j++)
			printf(" ");
		for(k=1 ; k < (2*(i)) ; k++)
			printf("*");
		
		
		printf("\n");
	}
}

