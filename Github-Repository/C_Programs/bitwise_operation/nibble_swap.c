#include<stdio.h>
int main()
{
	int num,res;
	printf("enter the no\n");
	scanf("%d",&num);
	res=((num & 0x0f) << 4 | (num & 0xf0) >> 4);
	printf("%d",res);
}
