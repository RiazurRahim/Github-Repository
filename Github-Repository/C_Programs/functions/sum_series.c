//sum of series of numbers
#include<stdio.h>
void sum(int);
int main()
{
	int n;
	printf("enter the no\n");
	scanf("%d",&n);
	sum(n);
}
void sum(int a)
{
	int i;
	printf("1");
	for(i=2 ; i<=a ; i++)
	{
		printf(" + 1/%d ",i);
	}

}
