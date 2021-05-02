#include<stdio.h>
int fact(int n)
{
	int j=n;

	while (n>1)
	{
		j=j*(n-1);
		printf("j is %d \n",j);
		n--;
	}

	return j;
}
int main()
{
	int a,b,c;
	printf("enter the no for factorial \n");
	scanf("%d",&a);
	b=fact(a);
	printf("factorial of no %d is \n %d", a, b);
}
