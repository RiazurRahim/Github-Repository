//array passing to a function

#include<stdio.h>
void array_print(int n[],int m);
int main()
{
	int i,num;
	int a[10];
	printf("enter how many elements\n");
	scanf("%d",&num);
	printf("enter the numbers\n");
	for(i=0 ; i<num ; i++)
	{
		scanf("%d",&a[i]);
	}
	array_print(a,num);
	return 0;
}

void array_print(int n[],int m)
{
	int j;
	for(j=0 ; j<m ; j++)
	{
		printf("%d\t",n[j]);
		
	}

}
