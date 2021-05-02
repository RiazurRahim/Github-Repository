#include<stdio.h>
int bubble_sort(int B[] ,int m);
int main()
{
	int A[20],i,n,j;
	printf("enter the no for list\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&A[i]);
	}
	bubble_sort(A,n);
	printf("sorted order is \n");
	for(j=0 ; j<n ; j++)
	{
		printf("%d\n",A[j]);
	}
}
int bubble_sort(int B[],int m)
{
	int temp,i,round;
	for(round=1;round<=m-1;round++)
		for(i=0 ; i<=m-1-round ; i++)
		{
			if(B[i]>B[i+1])
			{
				temp=B[i];
				B[i]=B[i+1];
				B[i+1]=temp;
			}
		}
	

}
