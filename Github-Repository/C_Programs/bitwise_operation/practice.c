#include<stdio.h>
int main()
{
	int num,num2,th,pos1,pos2,set,clr,tog,ext;
	printf("enter the no\n");
	scanf("%d",&num);
	//printf("enter the 2nd no\n");
	//scanf("%d",&num2);
	for(th=0;th<10;th++)
		printf("or operation is %d\n",num | th);
	/*printf("enter the positions\n");
	scanf("%d%d",&pos1,&pos2);	
	set=num |((1<<pos1)|(1<<pos2));
	printf("setting a bit %d\n",set);
	*/
}

