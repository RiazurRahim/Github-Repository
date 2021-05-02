//

#include<stdio.h>

int main()
{
	int i,j,a,b;
	char n;
	printf("enter 'l'for left shift << as shown\n");
	printf("enter 'r'for right shift >> as shown\n");
	scanf("%c",&n);

	switch (n)
	{
		case 'l':
			printf("enter the no to left shift <<--\n");
			scanf("%d",&i);
			printf("enter how many nos for left shift <<--\n");
			scanf("%d",&j);
			i<<=j;		//i=i<<j-----------------------------------------
			printf("left shift is %d",i);
			break;
		case 'r':
			printf("enter the no to right shift-->>\n");
			scanf("%d",&i);
			printf("enter how many nos for right shift -->>\n");
			scanf("%d",&j);
			i>>=j;		//i=i>>j-----------------------------------------
			printf("right shift is %d",i);
			break;
		default :
			printf("wrong input");
			break;
			
	}
	
}
