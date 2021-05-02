#include<stdio.h>
int main()
{
	int i,j,n;			//defining the variable
	int arr[50];			//defining the array varible
	printf("how many no want to enter\n");
	scanf("%d",&n);
	printf("enter the nos\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);		//storing the elements in array or initializing the array variable
	}
	for(j=0 ; j<n ; j++)
	{
		printf("%d\t",arr[j]);		//printing the elements of array 
	}
}
