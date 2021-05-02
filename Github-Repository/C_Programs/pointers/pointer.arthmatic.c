//pointer arthematic
//have to write printf()for oprand

#include<stdio.h>
int main()
{
	int a,b,c;
	int *p,*q,*n;
	int op;
	printf("enter the operand");
	scanf("%d",&op);
	switch(op)
	{
		case A :
			printf("enter the nos to Addition");
			scanf("%d%d",&a,&b);
			*p=&a;
			*q=&b;
			*n=*a+*b;
			printf("Addition is %d",*n);
			break;
		case S :
			printf("enter the nos to Subraction");
			scanf("%d%d",&a,&b);
			*p=&a;
			*q=&b;
			*n=*a-*b;
			printf("Subraction is %d",*n);
			break;
		case M :
			printf("enter the nos to Multiplication");
			scanf("%d%d",&a,&b);
			*p=&a;
			*q=&b;
			*n=*a * *b;
			printf("Multiplication is %d",*n);
			break;
		case D
			printf("enter the nos to Multiplication");
			scanf("%d%d",&a,&b);
			*p=&a;
			*q=&b;
			*n=*a * *b;
			printf("Multiplication is %d",*n);
			break;



	}
}
