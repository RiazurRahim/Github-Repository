// find the no is prime or not

#include<stdio.h>

int main()
{
	int i,n;
	int count=0;
	printf("enter the no\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d is a prime no\n",n);
	}
	else 
	{
		printf("%d is not prime no\n",n);
	}
	return 0;
}
