/**
    class: student 10
    name,student id, cgpa
    */

#include<stdio.h>
#include<string.h>

struct cse12
{
    char name[20];
    int sid;
    double cgpa;

};
int main()
{
    struct cse12 student;
    srecpy(student.name,"Fahim");
    student.sid=16101036;
    student.cgpa=3.50;

    printf("Student name: %s\n",student.name);
    printf("Student Id: %d\n",student.sid);
    printf("Student cgpa: %.2lf\n",student.cgpa);



    return 0;
}


