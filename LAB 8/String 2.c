#include<stdio.h>
void main()
{
    struct student
    {
        int rollno;
        char name[20];
        char sec[3];
        char dept[20];
        int totalmarks;
    }student1,student2;
    printf("enter the roll number of student 1 and student 2\n");
    scanf("%d%d",&student1.rollno,&student2.rollno);
    printf("enter the name of student 1 and student 2\n");
    scanf("%s%s",student1.name,student2.name);
    printf("enter section of student 1 and student 2\n");
    scanf("%s%s",student1.sec,student2.sec);
    printf("enter the department of student 1 and student 2\n");
    scanf("%s%s",student1.dept,student2.dept);
    printf("enter the total marks of student 1 and student 2\n");
    scanf("%d%d",&student1.totalmarks,&student2.totalmarks);
    printf("STUDENT 1 DETAILS=\n");
    printf("roll no=%d\n",student1.rollno);
    printf("name=%s\n",student1.name);
    printf("section=%s\n",student1.sec);
    printf("department=%s\n",student1.dept);
    printf("total marks=%d\n \n",student1.totalmarks);
    printf("STUDENT 2 DETAILS=\n ");
    printf("roll no=%d\n",student2.rollno);
    printf("name=%s\n",student2.name);
    printf("section=%s\n",student2.sec);
    printf("department=%s\n",student2.dept);
    printf("total marks=%d\n \n",student2.totalmarks);
    if(student1.totalmarks>student2.totalmarks)
    {
        printf("student 1 got highest marks\n");
    }
    else
    {
        printf("student 2 got highest marks\n");
    }
}
