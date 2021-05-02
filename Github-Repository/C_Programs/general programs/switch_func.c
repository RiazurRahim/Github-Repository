//in switch function athematic operation by using separate separate functions

#include<stdio.h>
int add()
{
	int a,b;
	printf("enter the nos for addition\n\n");
	scanf("%d%d",&a,&b);
	printf("the addition is %d",a+b);
}
int sub()
{
	int a,b;
	printf("enter the nos for subraction\n\n");
	scanf("%d%d",&a,&b);
	printf("the subraction is %d",a-b);
}
int mul()
{
	int a,b;
	printf("enter the nos for multiplication\n\n");
	scanf("%d%d",&a,&b);
	printf("the multiplication is %d",a*b);
}
int div()
{
	int a,b;
	printf("enter the nos for division\n\n");
	scanf("%d%d",&a,&b);
	printf("the division is %d",a/b);
}
int mod()
{
	int a,b;
	printf("enter the nos for reminder\n\n");
	scanf("%d%d",&a,&b);
	printf("the modulation is %d",a%b);
}
int main()
{
	int ch;
	printf("select the option and enter it\n\n");
	printf(" 1 for addition\n 2 for subraction\n 3 for multiplication\n 4 for division\n 4 for modulation\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 :
			add();
			break;
		case 2 :
			sub();
			break;
		case 3 :
			mul();
			break;
		case 4 :
			div();
			break;
		case 5 :
			mod();
			break;
		default :
			printf("invalid option\n");
			break;
	}
}
