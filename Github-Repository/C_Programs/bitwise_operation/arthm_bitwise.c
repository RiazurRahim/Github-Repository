#include<stdio.h>

int add();
void sub();
int mul(int , int);
int div(void);

int main()
{
	int ch,ad,a,b,ml,dv;
OPT:printf("select the option\n");
	printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			ad=add();
			printf("the addition is %d\n",ad);
			goto OPT;
			break;
		case 2:
			sub();
			goto OPT;
			break;
		case 3:
			printf("enter the nos for multiplication\n");
			scanf("%d%d",&a,&b);
			ml=mul(a,b);
			printf("multiplication is %d\n",ml);
			goto OPT;
			break;
		case 4:
			div();
			goto OPT;
			break;
		case 5:
			exit(1);
		default:
			printf("invalid option\n");
			goto OPT;
			break;
	}
	return 0;
}
int add()
{
	int x,y,carry;
	printf("enter the nos for addition\n");
	scanf("%d%d",&x,&y);
	while(y!=0)
	{
		carry=x&y;
		x=x^y;
		y=carry<<1;
	}
	return x;
}
void sub()
{
	int x,y,brro;
	printf("enter the nos for subtraction\n");
	scanf("%d%d",&x,&y);
	while(y!=0)
	{
		brro=(~x)&y;
		x=x^y;
		y=brro<<1;
	}
	printf("subtraction is %d\n",x);
}
int mul(int x,int y)
{
	int res=0;
	while(y>0)
	{
		if(y&1)
		{
			res=res+x;
		}
		x=x<<1;
		y=y>>1;
		
	}
	return res;
}
int div(void)
{
	int x, y,quotient = 0;
	printf("enter the nos for division\n");
	scanf("%d%d",&x,&y);
	
	while (x >= y)
	{
		x = x - y;      // perform a reduction on the dividend
		quotient++;     // increase quotient by 1
	}

	printf("The quotient is %d\n",quotient);

	printf("The remainder is %d\n", x);
}
