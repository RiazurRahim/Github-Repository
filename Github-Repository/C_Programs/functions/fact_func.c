//calculating factorial of number using function

#include<stdio.h>
int fact(int);
int main()
{
	int n,i,fc;
	printf("enter the no\n");
	scanf("%d",&n);
	printf("\n\n");
	fc=fact(n);
	printf("%d",fc);

}

int fact(int a)
{
	int f=1,i;
	for(i=a ; i>0 ; i--)
	{
		
		f=f*i;		
		printf("%d\t",i);
		printf("%d\t",f);
		printf("\n\n");
		
	}
	return f;

}
