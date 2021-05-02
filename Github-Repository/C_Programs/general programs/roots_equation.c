// find the roots of a quadratic equation.

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s;
	float sqr,dis,real,img,root1,root2;
	
	printf("enter the co-efficiant a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);

	dis=((b*b)-4*a*c);
	
	if(dis>0)
	{
		root1=(-b+sqrt(dis))/(2*a);
		root2=(-b-sqrt(dis))/(2*a);
		printf("roots are %.2f\t %.2f\n",root1,root2);
	}
	else if(dis==0)
	{
		root1 = root2 = (-b)/(2*a);
		printf("roots are root1 = root2 = %.2f\n",root1);
	}
	else
		real = -b/(2*a);
		img = sqrt(-dis)/(2*a);
		printf("root1 = %.2f + i%.2f and \nroot2 = %.2f - i%.2f",real,img,real,img);

	return 0;
}
