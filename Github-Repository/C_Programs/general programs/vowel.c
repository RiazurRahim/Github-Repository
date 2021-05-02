//check vowel or consonant

#include<stdio.h>
int main()
{
	char x;
	printf("enter the charecter to find vowel or consonant -> ");
	scanf("%c",&x);
	if((x =='a')||(x == 'e')||(x == 'i')||(x == 'o')||(x == 'u'))
		printf("entered charecter is vowel");
	else
		printf("entered charecter is consonant");

}
