#include<stdio.h>
/*void main()
{
	int i,j,n;
	printf("the ascii values are -->\n ");
	for(i=0 ; i<=126 ; i++){
		printf("%d = %c\t",i,i);
		if((i==10)||(i==20)||(i==30)||(i==40)||(i==50)||(i==60)||(i==70)||(i==80)||(i==90)||(i==100)||(i==110)||(i==120)||(i==130)){
			printf("\n");
		}
		}
}*/
void main()
{
	int i,j,k=0;
	printf("the ascii values are\n");
	for(i=0;i<=12;i++)
	{
		for(j=0;j<=12;j++)
		{
			printf("%d ==> %c\t",k,k);
			k++;
		}
		printf("\n\n");
	}
}