//reverse a number

#include<stdio.h>

int main()
{
	int a,n,r=0,sum;

	printf("enter the no to reverse it \n");
	scanf("%d",&n);
	while (n!='\0')
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
	
	}
	printf("the reverse no is %d ",r);
}
