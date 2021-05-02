# include<stdio.h>
int main()
{
	int i,j,n,x;
	long int k;

	printf("enter the no\n");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n-1-i ; j++)
			printf(" ");
		for(k=0 ; k < (2*(i+1)) ; k++)
			printf("*");
		printf("\n");
	}
}




