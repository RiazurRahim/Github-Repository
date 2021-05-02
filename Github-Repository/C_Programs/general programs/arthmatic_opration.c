//arthmatic operations

#include<stdio.h>
int main()
{
	int a,b,c;
	char n;
	printf("enter the alphabet\n");
	printf(" a or A for addition\n s or S for subraction\n m or M for multiplication\n d or D for division\n r or R for modular\n");
	scanf("%c",&n);
	//printing user entered no
	printf("entered no is %c\n",n);
	switch(n)
	{
			case 'a':
			case 'A':
				printf("enter no for addition\n");
				scanf("%d%d",&a,&b);
				c=a+b;
				printf("addition is %d",c);
				break;
			case 's':
			case 'S':
				printf("enter no for subraction\n");
				scanf("%d%d",&a,&b);
				c=a-b;
				printf("subraction is %d",c);
				break;
			case 'm':
			case 'M':
				printf("enter no for multiplication\n");
				scanf("%d%d",&a,&b);
				c=a*b;
				printf("multiplication is %d",c);
				break;
			case 'd':
			case 'D':
				printf("enter no for division\n");
				scanf("%d%d",&a,&b);
				c=a/b;
				printf("division is %d",c);
				break;
			case 'r':
			case 'R':
				printf("enter no for moudular\n");
				scanf("%d%d",&a,&b);
				c=a%b;
				printf("reminder is %d",c);
				break;
			default :
				printf("invalid no");
				break;


	}
}
