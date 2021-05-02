#include<stdio.h>

int main()
{
	int i,j,a,b;
	char n;
	printf("enter 'l'for left << as shown\n");
	printf("enter 'r'for left >> as shown\n");
	scanf("%c",&n);

	switch (n)
	{
		case 'l':
			printf("enter the no to <<--\n");
			scanf("%d",&i);
			printf("enter no for left shift <<--\n");
			scanf("%d",&j);
			i<<=j;
			printf("left shift is %d",i);
			break;
		case 'r':
			printf("enter the no to -->>\n");
			scanf("%d",&i);
			printf("enter no for right shift -->>\n");
			scanf("%d",&j);
			i>>=j;
			printf("right shift is %d",i);
			break;
		default :
			printf("wrong input");
			break;
			
	}
	/*printf("enter the no\n");
	scanf("%d",&i);
	printf("enter no of shift\n");
	scanf("%d",&j);
	a=i<<j;
	printf("shifted no is %d \n",a);*/
}
