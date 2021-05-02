//arthematic operations

#include<stdio.h>
int add(int , int);
int main()
{
	int i;
	int a,b,c;
	printf("enter the alphabet as shown below\n");
	printf("A for addtn,\t S for subtn,\t M for mul,\t D for div, \t R for modular \n");
	scanf("%c",&i);
	switch (i)
	{
		case 'A' :
			printf("enter the no for addition \n");
			scanf("%d%d",&a,&b);
		//	c=a+b; 			
			c = add(a,b); //if we want separate functions
			printf("sumation is %d \n",c);
			break;
		case 'S' :
			printf("enter the no for subraction \n");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("subraction is %d \n",c);
			break;
		case 'M' :
			printf("enter the no for multiplication \n");
			scanf("%d%d",&a,&b);
			c=a*b;
			printf("multplication is %d \n",c);
			break;
		case 'D' :
			printf("enter the no for division \n");
			scanf("%d%d",&a,&b);
			c=a/b;
			printf("division is %d \n",c);
			break;
		case 'R' :
			printf("enter the no for modular \n");
			scanf("%d%d",&a,&b);
			c=a%b;
			printf("modular is %d \n",c);
			break;
		default :
			printf("worng input \n");
			break;

	}

}
int add (int i, int j)
{
	int k;
	k=i+j;
	return k;
}
