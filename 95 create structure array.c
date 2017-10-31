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
void print(struct cse12 student[])
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("student name: %s\n",student[i].name);
        printf("student Id: %d\n",student[i].sid);
        printf("student cgpa: %.2lf\n",student[i].cgpa);
    }

}
int main()
{
    struct cse12 student[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%s %d %lf",student[i].name,&student[i].sid,&student[i].cgpa);
    }
    print(student);

    return 0;
}



