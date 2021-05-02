//pointers program

#include<stdio.h>
int main()
{
	int i,j,n;
	int *p=&n;
	printf("enter the no\n");
	scanf("%d",&n);
	printf("n:-->%d\n",n);
	printf("&n:-->%d\n",&n);
	printf("*p:-->%d\n",*p);
	printf("&p:-->%d\n",&p);
	
}
