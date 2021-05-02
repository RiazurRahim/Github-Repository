//numbers are in acending order
//largest no 
#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE],i,j,k;
	int temp;
	printf("enter the nos want to evaluate\n");
	
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered nos are\n");
	for(j=0;j<SIZE;j++)
	{
		
		printf("%d\n",a[j]);
	}
	for(k=SIZE ; k>0 ; k--)
	{
	for(i=0; i < SIZE-1 ;i++)
	{
		if(a[i]>a[i+1])
		{
			
			
			temp=a[i];		
			a[i]=a[i+1];
			a[i+1]=temp;
				
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
