#include<stdio.h>
int main()
{
	int num,res1,res2,p1,p2;
	printf("enter the no\n");
	scanf("%d",&num);
	printf("enter the position\n");
	scanf("%d%d",&p1,&p2);
	res1=num ^ (1<<p1);
	res2=res1 ^ (1<<p2);
	printf("result is %d",res2);
}
