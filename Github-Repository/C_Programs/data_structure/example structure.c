#include < stdio.h>
#define SIZE 50

struct student {
    char name[30];
    int rollno;
    int sub[3];
    int total;
};

void main()
{
    int i, j, max, count, tot=0, n, a[SIZE], ni;
    struct student st[SIZE];

    printf("Enter how many students: ");
    scanf("%d", &n);

    /* For loop to read data of students*/
    for (i = 0; i < n; i++) {
          tot=0;
          printf("\nEnter name and roll number for student %d : ", i+1);
          scanf("%s", &st[i].name);
          scanf("%d", &st[i].rollno);
          for (j = 0; j < = 2; j++) {
                printf("Enter marks of student %d for subject %d : ", i+1, j+1);
                scanf("%d", &st[i].sub[j]);
                tot = tot+st[i].sub[j];
             
        }
          st[i].total = tot;
    }

    printf("\n\n\n");

    for(i=0; i < n; i++) {
          printf("Student %d Name : %s \n",i+1,st[i].name);
          printf("Student %d Rollno: %d \n",i+1,st[i].rollno);
          for (j = 0; j <= 2; j++) {
                printf("marks of subject %d : %d \n", j+1, st[i].sub[j]);
             
        }
          printf("Total marks : %d \n\n",st[i].total);
    }
}