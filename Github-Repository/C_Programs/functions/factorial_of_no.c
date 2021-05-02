#include<stdio.h>
int fact (int);
int main()
{
	int num,a,i;
	printf("enter the no\n");
	scanf("%d",&num);
	for(i=num;i>0;i--)
	{
		printf("%d  ",i);
	}
	a=fact(num);
	printf("\nfactorial is %d\n",a);
}
int fact(int n)
{
	int j=n;
	if(n<=1)
	{
		return 1;
	}
	else
	/*{
		n=n*fact(n-1);		//	recursion
		return n;
	}*/
	
	while (n>1)
	{
		j=j*(n-1);
		n--;
	}
	//printf("fact of %d is %d\n",n,j);
	return j;
	
}

