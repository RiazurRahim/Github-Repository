#include<stdio.h>
int larg(int *a[],int );
int main()
{
	int n,i,j;
	int a[10];
	printf("enter how many nos want to check\n");
	scanf("%d",&n);
	printf("enter the nos\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	larg(&a,n);
}
int larg(int *b[],int no)
{
	int m,i;
	int c[10];
	
	for(i=0;i<no;i++)
	{
		c[i]=b[i];
		if(c[i]>m)
			m=c[i];
	}
	printf("the largest no is %d\n",m);
}
