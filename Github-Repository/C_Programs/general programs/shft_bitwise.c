//bit wise shift left and right operator

#include<stdio.h>

int main()
{
	int i,j,a,b;
	char n;
	printf("enter 'l'for left << as shown\n");
	printf("enter 'r'for right >> as shown\n");
	scanf("%c",&n);

	switch (n)
	{
		case 'l':
			printf("enter binary no (0 or 1) <<--\n");
			scanf("%d",&i);
			printf("how many nos to left shift (enter integer no)<<--\n");
			scanf("%d",&j);
			i<<=j;	//i=i<<j------------------------------
			printf("left shift is %d",i);
			break;
		case 'r':
			printf("enter binary no -->>\n");
			scanf("%d",&i);
			printf("how many nos to right shift (enter integer no)-->>\n");
			scanf("%d",&j);
			i>>=j;	//i=i>>j------------------------------
			printf("right shift is %d",i);
			break;
		default :
			printf("wrong input");
			break;
			
	}
}
