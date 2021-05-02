//structure program

#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	float marks;
};
int main(void)
{
	struct student std1,std2,std3;
	printf("enter the sutdent details\n");
	scanf("%s%d%f",&std2.name,&std2.rollno,&std2.marks);
    strcpy(std1.name,"abcd");
	std1.rollno=1;
	std1.marks=1;
	printf("details of student 1 are\n");
	printf("%s\n %d\n %f\n",std1.name,std1.rollno,std1.marks);
	printf("details of student 2 are\n");
	printf("%s\n %d\n %f\n",std2.name,std2.rollno,std2.marks);

	

}
