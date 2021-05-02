//number series in acending order

#include<stdio.h>
#define SIZE 10
void swap(int *a, int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}

int main()
{
	int a[SIZE],i,j,k;
	printf("enter the nos want to evaluate\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n entered nos are\n");
	for(j=0;j<SIZE;j++)
	{
		 
		printf("%d\n",a[j]);
	}
	for(k=SIZE ; k>0 ; k--)
	{
		for(i=0; i < SIZE-1;i++)		
		{
			if(a[i]>a[i+1])
			{
				swap(&a[i],&a[i+1]);
				
			}
		}
	}
	printf("\n sorted list is\n\n");
	
	for(j=0;j<SIZE;j++)
	{
		printf("%d\n",a[j]);
	}
	printf("\n the first largest no is %d\n",a[SIZE-1]);
	printf(" 2nd largest no is %d \n",a[SIZE-2]);


}
