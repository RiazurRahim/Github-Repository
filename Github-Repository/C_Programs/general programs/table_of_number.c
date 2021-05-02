//multiplication table of a number
# include<stdio.h>
int main ()
{
	int i=1,j,k,n,mul;
	printf("enter a no\n");
	scanf("%d",&n);
	
	printf("the multiplication table is \n");
	
	while(i<=20)
	{
		j=n*i;
		printf("%d*%d=%d\n",n,i,j);
		i++;
	}
}

