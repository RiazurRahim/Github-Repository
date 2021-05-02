# include <stdio.h>

int main()
{
	int i,n,a=0,b=1,c;
	printf("enter the no to print fabnoci series \n");
	scanf("%d",&n);

   printf("fibnocci series is -- 0 1");

	for(i=0;i<(n-2);i++)
	{
  c=a+b;
  a=b;
  b=c;
  printf(" %d",c);
	}
}
    