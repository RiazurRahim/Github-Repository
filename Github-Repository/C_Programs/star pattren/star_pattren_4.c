// four basic star pattren

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the no\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			//--------------------1
			//if(j<=i)
			//--------------------2
			//if(j>=i)
			//--------------------3	
			//if(j<=n-i)
			//--------------------4
			//if((j>=n-i))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
