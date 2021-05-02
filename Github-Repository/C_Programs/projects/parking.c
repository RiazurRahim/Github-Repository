#include<stdio.h>
#include<stdlib.h>

int menu();
void four_wheeler();
void three_wheeler();
void two_wheeler();
void status();
void reset();
int nof=0,not=0,notw=0,count=0,amount=0;
int main()
{
	int ch;
	while(1)
	{
		switch(menu(ch))
		{
			case 1:	four_wheeler();
				break;
			case 2: three_wheeler();
				break;
			case 3: two_wheeler();
				break;
			case 4: status();
				break;
			case 5: reset();
				break;
			case 6: exit(0);

			default: printf("invalid option\n");
				 break;
		}
	}

	

}
int menu()
{
	int ch;
	printf("select the option\n");
	printf(" 1.four wheeler\n 2.three wheeler\n 3.two wheeler\n 4.status\n 5.reset\n 6.exit\n");
	scanf("%d",&ch);
	return ch;

}
void four_wheeler()
{

	nof++;
	printf("4 wheeler entry\n");
	count++;
	amount=amount+100;
}
void three_wheeler()
{
	not++;
	printf("3 wheeler entry\n");
	count++;
	amount=amount+70;
}
void two_wheeler()
{
	notw++;
	printf("2 wheeler entry\n");
	count++;
	amount=amount+30;
}
void status()
{
	printf("four wheeler %d\n",nof);
	printf("three wheeler %d\n",not);
	printf("two wheeler %d\n",notw);
	printf("no of vehicle %d\n",count);
	printf("total amount %d\n",amount);

}
void reset()
{
	nof=0;
	not=0;
	notw=0;
	count=0;
	amount=0;
}
