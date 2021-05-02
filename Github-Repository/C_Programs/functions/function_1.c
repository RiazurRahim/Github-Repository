#include<stdio.h>
int add(int , int);
int main()
{
	int a,b,c;
	printf("additon is %d ",add(a,b));

}
int add(int x , int y)
{

	printf("enter two nos\n");
	scanf("%d%d",&x,&y);
	return x+y;
}
