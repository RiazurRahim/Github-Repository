//rational numbers like 1/2  1/3  1/4 etc.

#include<stdio.h>
int main()
{
	int i,n,mul=1;
	printf("enter the no\n\n");
	scanf("%d",&n);
	printf("\n\n");
	for(i=1 ; i<=n ; i++)
	{
		printf("%d\t",i);
		mul=mul*i;
		printf("1/%d\t",i);
		printf("1/%d\t",mul);
		printf("\n");
	}
}
