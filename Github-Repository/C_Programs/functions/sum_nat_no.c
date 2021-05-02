//sum of even and odd n natural numbers

#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("upto how much series want to print\n");
	scanf("%d",&n);
	sum(n);
}
int sum(int m)
{
	int j,eve=0,odd=1;

	for(j=1 ; j<=m ; j++)
	{

		printf("%d\t",2*j);
		eve=eve+j;				//sum of even numbers
		printf("%d\t",eve);
		printf("%d\t",2*j-1);
		odd=odd+j;				//sum of odd numbers
		printf("%d\n",odd);

	}
	
}
