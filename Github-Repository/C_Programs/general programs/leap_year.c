//find the leap year 

#include<stdio.h>
#include<math.h>
int main()
{
	int year;
	printf("enter the year\n");
	scanf("%d",&year);
	if(((year%4==0)&&(year%100!=0)))
		printf("%d year is leap year\n",year);
	else
		printf("%d year is not leap year\n",year);
	return 0;
}
