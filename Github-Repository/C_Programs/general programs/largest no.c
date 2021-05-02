#include<stdio.h>
#define SIZE 20
void swap(int *a, int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}

int main()
{
	int a[100],i,j,k;
	printf("enter the nos want to evaluate\n");
	//printf("enterd no should be LESS THAN 11 \n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<SIZE;j++)
	{
		//printf("entered nos is "); 
		printf("\n%d\n",a[j]);
	}
	for(i=0; i < SIZE-1 ;i++)
	{
		if(a[i]>a[i+1])
		{
			swap(&a[i],&a[i+1]);
				
		}
	}
printf("the largest no is %d",a[SIZE-1]);
}
