//decimal to binary conversion

#include<stdio.h>
int main()
{
	int d_no,j,bin[50];
	printf("enter the no \n");
	scanf("%d",&d_no);
	int i=0;
	while (d_no>0)
	{
		bin[i]=d_no%2;
		//printf("\nbinary no is %d\n",bin[i]);
		d_no = d_no/2;
		i++;
	}
	printf("\n binary no is\n\n");
	for(j=i-1 ; j>=0 ; j--)
	{
		printf("%d  ",bin[j]);

	}
}
