//matrix using while loop

#include<stdio.h>
int main()
{
	int i=0,j=0,k=0,l=0,n=9;
	int a[3][3],b[3][3];
	
	printf("enter the 1st matrix \n");
	while(i<3)
	{
		j=0;	
		while(j<3)
		{
			
			scanf("%d",&a[i][j]);
			j++;
		}
		i++;
	}
	printf("enter the 2nd matrix \n");
        k=0;
	while(k<3)
	{
		l=0;
		while(l<3)
		{
			
			scanf("%d",&b[k][l]);
			l++;
		}
		k++;
		
	}
	printf("1st matrix is \n");
        i=0;
	while(i<3)
	{
		j=0;
		while(j<3)
		{
			
			printf("%d \t",a[i][j]);
			j++;
		}
		printf("\n\n");
		i++;
		
	}
	printf("2nd matrix is\n");
        k=0;
	while(k<3)
	{

		l=0;
		while(l<3)
		{
			

			printf("%d \t",b[k][l]);
			l++;
		}
		printf("\n\n");
		k++;
		
	}
	

}
