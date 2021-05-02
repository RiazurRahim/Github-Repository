#include<stdio.h>
int table(int,int);
int main()
{
	int no,i,res;
	printf("enter the no\n");
	scanf("%d",&no);
	for(i=1;i<=20;i++)
	{
		res=table(no,i);
		printf("%d * %d = %d\n",no,i,res);
	}
}
int table(int num,int x)
{
	int sum=0;
	while(x)
	{
		if(x & 1)
		{
			sum=sum+num;
		}
		num=num<<1;
		x=x>>1;
	}
	return sum;
}
