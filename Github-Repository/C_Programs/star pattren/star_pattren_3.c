# include<stdio.h>

int main()
{
	int i,j,k,n;
	printf("enter the no to print star patteren \n");
	scanf("%d",&n);

	for(i=1 ; i<=n-1 ; i++)
	{
		for(j=1 ; j<n-i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
