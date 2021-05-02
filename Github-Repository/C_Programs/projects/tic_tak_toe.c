#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>


char a[9]={'1','2','3','4','5','6','7','8','9'};
void gameName()
{
	printf("\n\t\t\t   Tic Tak Toe\n");
}
void show()
{
	printf("\n\t\t\t___________________\n");
	printf("\t\t\t|  %c  |  %c  |  %c  |",a[0],a[1],a[2]);
	printf("\n\t\t\t|_____|_____|_____|\n");
	printf("\t\t\t|  %c  |  %c  |  %c  |",a[3],a[4],a[5]);
	printf("\n\t\t\t|_____|_____|_____|\n");
	printf("\t\t\t|  %c  |  %c  |  %c  |",a[6],a[7],a[8]);
	printf("\n\t\t\t-------------------\n");

}
void inputSymbol()
{
	printf("\tplayer 1:-> symbol x \n");
	printf("\tplayer 2:-> symbol 0 \n");
}
void start()
{
	int u;
	printf("enter who will start the game player 1 or player 2\n");
	scanf("%d",&u);
}
void play()
{
	char p,s;
	printf("enter position and symbol of the player\n");
	fflush(stdin);
	
	
	scanf("%c",&p);
	fflush(stdin);
	
	scanf("%c",&s);
	check(p,s);
}
void check(char P , char S)
{
	int i;
	for(i=0 ; i<=8 ; i++)
	{
		if(a[i]==P)
		{
			a[i]=S;
		}
	}
}
int end()
{
	if ((a[0]=='x' && a[1]=='x' && a[2]=='x')||

		(a[0]=='x' && a[4]=='x' && a[8]=='x')||

		(a[0]=='x' && a[3]=='x' && a[6]=='x'))
	
		return(100);
	
	else if ((a[0]=='0' && a[1]=='0' && a[2]=='0')||

		(a[0]=='0' && a[4]=='0' && a[8]=='0')||

		(a[0]=='0' && a[3]=='0' && a[6]=='0'))
		
		return(200);


	else if ((a[1]=='x' && a[4]=='x' && a[7]=='x')||

		(a[2]=='x' && a[4]=='x' && a[6]=='x')||

		(a[2]=='x' && a[5]=='x' && a[8]=='x'))
	
		return(100);
		
	else if ((a[1]=='0' && a[4]=='0' && a[7]=='0')||

		(a[2]=='0' && a[4]=='0' && a[6]=='0')||

		(a[2]=='0' && a[5]=='0' && a[8]=='0'))
	
		return(200);


	else if((a[6]=='x' && a[7]=='x' && a[8]=='x')||

		(a[3]=='x' && a[4]=='x' && a[5]=='x'))

		return(100);

	else if((a[6]=='0' && a[7]=='0' && a[8]=='0')||

		(a[3]=='0' && a[4]=='0' && a[5]=='0'))

		return(200);
	
	return(300);


}
int main()
{
	int k;
	//clrscr();
	//system("cls");
	//printf("\e[1;1H\e[2J");
	system("clear");
	
	gameName();
	show();
	inputSymbol();
	start();
	play();
	//system("cls");
	//printf("\e[1;1H\e[2J");
	system("clear");
lable:
	show();
	play();
	k=end();
	//system("cls");
	//printf("\e[1;1H\e[2J");
	show();
	
	if(k==100)
		printf("player 1 won \n");
	else if (k==200)
		printf("player 2 won \n");
	else
		goto lable;

}
