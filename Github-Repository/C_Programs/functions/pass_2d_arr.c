//passing 2d arrya as pointer

#include<stdio.h>
void fun_arr_acpt(int [][3]);
void fun_arr_recv(int (*)[3]);


void main()
{
	int a[3][3];
	fun_arr_acpt(a);
	fun_arr_recv(a);
}
void fun_arr_acpt(int a[][3])
{
	int i,j;
	printf("enter the elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
		
	}

}
void fun_arr_recv(int (*a)[3])
{
	int i,j;

	printf("the elements are\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
		
	}
	
}

