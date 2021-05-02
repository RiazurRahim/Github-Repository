#include<stdio.h>
int main()
{
	int *p,*q,*a,i,j,k;
	printf("enter the 2 no to sum \n");
	scanf("%d",&i);
	scanf("%d",&j);
	p=&i;
	q=&j;

	*a=*p+*q;
	printf("the sum is %d\n",*a);

}
