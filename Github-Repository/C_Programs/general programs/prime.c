

#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter a no\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	
	}
	if(count==2)
		printf("%d is prime\n",n);
	else
		printf("%d is not prime\n",n);
	printf("count is %d\n",count);
}
