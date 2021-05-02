//find the largest no amoung three nos

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	
	printf("enter three elements\n");
	scanf("%d%d%d",&a,&b,&c);

	if ((a>b)&&(a>c))
		printf("1st no %d is max no\n",a);
	else if(b>c)
		printf("2nd no %d is max no\n",b);
	else
		printf("3rd no %d is max no\n",c);
	return 0;
}
