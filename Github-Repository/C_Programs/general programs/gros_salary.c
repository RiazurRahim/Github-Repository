# include <stdio.h>

int main ()
{
	int ta,bs,da,gs;
	printf("enter the base salary \n");
	scanf("%d", &bs);
	ta = (bs*10)/100;
	da = (bs*12)/100;
	gs = ta+da+bs;
	printf("the gross salary is %d \n",gs);

}
