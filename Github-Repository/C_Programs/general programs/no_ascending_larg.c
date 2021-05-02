#include<stdio.h>
//#define SIZE 10

int main()
{
	int a[10],i,j,k;
	int temp;
	printf("enter the nos want to evaluate\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered nos is \n");		//printing entered numbers
	for(j=0;j<10;j++)
	{
		 
		printf("%d\n",a[j]);
	}

	for(k=10 ; k>0 ; k--)
	{
		for(i=0; i < 10-1;i++)
		{
			if(a[i]>a[i+1])			
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
					
			}
		}
	}
	printf("evaluated nos are and nos are ascending order \n");

	for(j=0;j<10;j++)
	{
		 
		printf("%d\t",a[j]);
	}
	printf("\nnos are in descending order\n");
	for(j=9;j>=0;j--)
	{
		printf("%d\t",a[j]);
	}
	printf("\nthe largest no is %d\n",a[10-1]);
	printf("the minimal no is %d",a[0]);
}
