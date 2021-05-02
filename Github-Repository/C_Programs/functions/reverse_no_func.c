//reverse the number 
#include<stdio.h>
int rev(int);

int main()
{
	int num,rev_no;
	printf("enter a no\n");
	scanf("%d",&num);
	printf("\n\n");
	rev_no=rev(num);
	
	printf("reverse no is %d\n",rev_no);
		
}
int rev(int no)
{
	int i,j=0,num,sum=0,count;
	while (no!='\0')
	{
		i=no%10;
		j=j*10+i;
		no=no/10;
				
	}
	return j;
}
