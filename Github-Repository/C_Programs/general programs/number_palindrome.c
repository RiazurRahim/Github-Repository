#include<stdio.h>
int main()
{
	int i,n,r,rev,temp;
	
	printf("enter the no\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==temp)
		printf("no is palindrome\n");
	else
		printf("no is not palindrome\n");



}
