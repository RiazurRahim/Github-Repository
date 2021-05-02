#include<stdio.h>

void main()
{
	/*int a[5]={1,2,3,4,5};
	int (*p)[5];
	int i,j;
	p=&a;
	printf("the values are\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d] = %d\t",i,a[i]);
		
		printf("%p\t",*p+i);
		printf("\n");
		//printf("%p\t",p+i);		

	}*/
	
	int a[2][2]={{1,2},{3,4}};//,{5,6},{7,8}};
	int (*p)[2];
	int i,j;
	p=a;
	printf("the values are\n");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
	{
		printf("a[%d][%d] = %d\t",i,j,a[i][j]);
		
		printf("%p\t",*(p+i)+j);
		printf("\n");
		//printf("%p\t",p+i);
	}

	}


}
