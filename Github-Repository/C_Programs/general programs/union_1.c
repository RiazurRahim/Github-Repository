//union program

#include<stdio.h>
void main()
{
	union uno_name 
	{
		char c;
		int i[5];
		char d;
		int j;
	}A1;
	union uno_name A2;
	
	int m,n,a,b;
	m=sizeof(A1);
	n=sizeof(A2);
	printf("the size of variable total A1-->%d\n\n",m);
	printf("the size of variable total A2-->%d\n\n",n);
	

	for(a=0;a<=5;a++)			//address of variable A1
	{
		printf("add of array member integer A1.i[] is %d\n\n",&A1.i[a]);
	}

	printf("add of charecter A1.c-->\t%d\n\n",&A1.c);
	printf("add of charecter A1.d-->\t%d\n\n",&A1.d);
	printf("add of integer A1.j-->\t%d\n\n",&A1.j);


	for(a=0;a<=5;a++)			//value of variable A1
	{
		printf("value of array member integer A1.i[] is %d\n\n",A1.i[a]);
	}

	printf("value of charecter A1.c-->%d\n\n",A1.c);
	printf("value of charecter A1.d-->%d\n\n",A1.d);
	printf("value of intger A1.j-->%d\n\n",A1.j);
	
}
