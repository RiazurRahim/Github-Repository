#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
	int l,vow=0,spc=0,con=0,puc=0,chr=0,i;
	char s[100];
	printf("enter the statement \n");
	//scanf("%s",&s);
	gets(s);

	l=strlen(s);
	printf("length of string %d \n",l);
	
	for(i=0 ; i<l ; i++)
	{
		
		if(isalpha(s[i]))
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			{
				vow++;
			}
			else
				con++;
		}

		if(isspace(s[i]))
		{
			spc++;
		}
		if(ispunct(s[i]))
		{
			puc++;
		}
	}
	printf("\n no of words = %d", l);
	printf("\n no of vowels = %d",vow);
	printf("\n no of consonants = %d",con);
	printf("\n no of space = %d",spc);
	printf("\n no of special charecter = %d", puc);
}
