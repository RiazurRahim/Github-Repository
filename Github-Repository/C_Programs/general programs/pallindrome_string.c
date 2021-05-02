#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
	char  str[50];
	printf("enter the string\n");
	gets(str);
	
	l=strlen(str);
	printf("length=%d\n",l);

	for(i=0;i<l/2;i++)
	{
		if(str[i]!=str[l-1-i])
		{
			printf("not a palindrome\n");
			break;
			
		}
	}
	if(i==l/2)
		printf("palindrome\n");
	return 0;

}
