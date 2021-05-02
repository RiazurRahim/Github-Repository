//sum of individual digits of a number using function
#include<stdio.h>
int sum(int a)
{
	int r,s=0;
	while(a!=0)
	{
		r=a%10;
		s=s+r;
		a=a/10;
	}
	return s;
}
int main()
{
	int n,b;
	printf("enter a no\n");
	scanf("%d",&n);
	printf("\n");
	b=sum(n);
	printf("the sum of individual digit of %d is %d",n,b);
	return 0;

}
