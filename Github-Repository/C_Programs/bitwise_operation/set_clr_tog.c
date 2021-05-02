#include<stdio.h>
int main()
{
	int num,pos,set,clr,tog,ext;
	printf("enter the no\n");
	scanf("%d",&num);
	printf("enter the position\n");
	scanf("%d",&pos);	
	set=num | (1<<pos);
	printf("setting a bit %d\n",set);
	clr=num & (~(1<<pos));
	printf("clearing a bit %d\n",clr);
	tog=num ^ (1<<pos);
	printf("togling a bit %d\n",tog);
	ext=num & (1<<pos);
	printf("extracing bit %d\n",ext);

}

