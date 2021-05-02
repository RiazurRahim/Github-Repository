#include<stdio.h>
int main()
{
	
	char dy; 
	printf("enter the day name as shown below ->\n");
	printf(" 'm''M' for Mondya \n 't''T' for Tuesday \n 'w''W' for Wednesday \n 'h''H'for thursday \n 'f''F' for friday \n 's''S' for saturday \n 'u''U' for sunday\n");
	printf("enter the character -> \n");
	scanf("%c", &dy);
	switch (dy)
	{
		
		case 'm':
		case 'M':
		printf("Monday\n");
		break;
		
		case 't':
		case 'T':
		printf("Tuesday\n");
		break;
		
		case'w':
		case'W':
		printf("Wednesday\n");
		break;
		
		case'h':
		case'H':
		printf("Thursday\n");
		break;

		case'f':
		case'F':
		printf("Friday\n");
		break;

		case's':
		case'S':
		printf("saturday\n");
		break;
		
		case'u':
		case'U':
		printf("Sunday\n");
		break;

		default :
		printf("wrong input\n");
		break;
	}
}

