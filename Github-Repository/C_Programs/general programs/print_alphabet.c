//prints alphabets by using ascii values
#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	char a[30];
	printf("upper case alphabets are\n");
	for(i=65 ; i<91 ; i++)
		printf("%c  ",i);
	printf("\n\n");
	
	printf("lower case alphabets are\n");
	
	for(j=97 ; j<123 ; j++)
		printf("%c  ",j);
	printf("\n\n");
	
	printf("special charecters are \n");
	for(k=0;k<=64;k++)
		printf("%d==>%c\t",k,k);
	printf("\n\n");
	printf("special charecters are \n");
	for(m=92;m<=96;m++)
		printf("%d==>%c\t",m,m);
	printf("\n\n");
	printf("special charecters are \n");
	for(n=124;n<=126;n++)
		printf("%d==>%c\t",n,n);
	

}
