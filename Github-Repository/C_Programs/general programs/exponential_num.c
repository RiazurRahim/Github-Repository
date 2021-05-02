//exponent of a no
#include<stdio.h>
#include<math.h>
int main()
{
	int num,exp;
	long int res=1;
	printf("enter the number and the exponent \n");
	scanf("%d%d",&num,&exp);
	if(exp == 0)
	{
		if(num==0)
		{
			printf("result is undefine");
			
		}
		else
			printf("result is %d",res);
			return 0;
	}
	while(exp>0)
	{
		res=res*num;
		exp--;

	}
	printf("the result is %ld \n",res);
}
