//no is prime or not

#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("enter the no to check no is prime or not \n");
	scanf("%d",&n);
	for(i=2 ; i<=n-1 ; i++)
	{
		if (n%i==0)
		{
			printf("\nnumber %d is not prime\n",n);
			printf("no is divisble by %d \n",i);
			flag = 1;
			break;
		}	
	}
	if (flag == 0)
		printf("no is prime\n");
}
