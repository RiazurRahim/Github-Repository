//swap of nos in an array

#include<stdio.h>

int func(int *arr,int b)
{
	int a;
	printf("\n");
	for(a=0 ; a<b ; a++)
	{
		printf("entered nos are --> %d\n",arr[a]);
	}
}
int swap(int *arr, int c)
{
	int temp,m,k;
	for(k=0 ; k<=c/2 ; k++)
	{
		temp=arr[k];
		arr[k]=arr[c-k];
		arr[c-k]=temp;
		//printf("swaping --> %d\t",arr[k]);
		//printf("swap --> %d\n",arr[c-k]);	
	}
	printf("\n after swaping -->\n\n");
	for(m=1  ; m<=c ; m++)
	{
		printf("swaped nos --> %d\n",arr[m]);
	}
}
int main()
{
	int i,j,n,k;
	int arr[30];
	printf("how many values want to store\n");
	scanf("%d",&n);
	
	printf("enter the values to store\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	func(arr,n);
	swap(arr,n);
}

