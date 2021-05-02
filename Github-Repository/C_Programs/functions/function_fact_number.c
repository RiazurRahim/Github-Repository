//factorial of a number

#include<stdio.h>
int fact(int n)
{
	int j=n;
	if(n<=1)
		return 1;
	while (n>1)
	{
		j=j*(n-1);
		
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
	printf("factorial of no %d is \n %d",a, b);
}
