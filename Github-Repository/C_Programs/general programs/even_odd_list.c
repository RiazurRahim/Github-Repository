//printing odd and even no list

#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the no to print the list of numbers\n");
	scanf("%d",&n);
	printf("\n\n");
	for(i=1 ; i<=n ; i++)
	{
		printf("%d\t",2*i-1);
		printf("%d\n",2*i);
	}
	
}

