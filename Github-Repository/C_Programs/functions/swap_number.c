//numbers in sorted order
//largest number
//numbers in acending order

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
	
	for(j=0;j<SIZE;j++)
	{
		printf("entered nos are "); 
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
	printf("\nthe largest no is %d\n\n",a[SIZE-1]);
	
	printf("\nsorted list is\n\n");
	
	for(j=0;j<SIZE;j++)
	{
		printf("%d\n",a[j]);
	}


}
