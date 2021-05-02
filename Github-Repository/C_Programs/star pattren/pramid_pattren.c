//star pramid pattren
 
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the no\n");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		for(j=0;j<=2*n;j++)	//inner loop extra 2 times.
		{
			if((j>=n-i)&&(j<=n-2+i))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
	
