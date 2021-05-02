//square of a number

#include<stdio.h>
int sqr(int i)
{
	int a;
	a=i*i;
	return a;
}
int main()
{
	int i,j;
	printf("enter the no \n");
	scanf("%d",&i);
	j=sqr(i);
	printf("square is %d \n",j);
}
