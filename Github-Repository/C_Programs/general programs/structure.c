//structure program
#include<stdio.h>
struct student
{
	char name[20];
	int rollNo;
	float marks;
}stu1,stu3;
struct student stu2={"name2",02,110.130};

int main()
{


	struct student stu3={"name3",03,101.035};
	struct student stu4,stu5;
	printf("enter the structure 4 details\n");
	scanf("%s%d%f",stu4.name, &stu4.rollNo, &stu4.marks);
	
	printf("enter the structure 5 details\n");
	scanf("%s%d%f",stu5.name, &stu5.rollNo, &stu5.marks);

	printf("the structure details are\n\n");

	printf("%s%d%f\n\n",stu1.name,stu1.rollNo,stu1.marks);//not defined
	printf("%s\t%d\t%f\n\n",stu2.name,stu2.rollNo,stu2.marks);//without space
	printf("%s\t%d\t%f\n\n",stu3.name,stu3.rollNo,stu3.marks);//one space at print
	printf("%s\t%d\t%f\n\n",stu4.name,stu4.rollNo,stu4.marks);//one space at print
	printf("%s\t%d\t%f\n\n",stu5.name,stu5.rollNo,stu5.marks);//spaces at print

}
