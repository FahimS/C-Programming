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
void output(struct cse12 student[])
{
    int i;
    printf("******OUTPUT*****\n");
    for(i=0;i<10;i++)
    {
        printf("%lf %s %d\n",student[i].cgpa,student[i].name,student[i].sid);
    }
}

void input(struct cse12 student[])
{
    int i;
    printf("******INPUT*****\n");
    for(i=0;i<10;i++)
    {
        scanf("%s %d %lf",student[i].name,&student[i].sid,&student[i].cgpa);
    }
}
void cgpasort(struct cse12 student[])
{
    //strcmp(s1,s2);
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(student[i].cgpa<student[j].cgpa)
            {
                struct cse12 temp;
                strcpy(temp.name, student[i].name);
                temp.sid=student[i].sid;
                temp.cgpa=student[i].cgpa;

                strcpy(student[i].name, student[j].name);
                student[i].sid=student[j].sid;
                student[i].cgpa=student[j].cgpa;

                strcpy(student[i].name, temp.name);
                student[i].sid=temp.sid;
                student[i].cgpa=temp.cgpa;
            }
        }
    }
}

int main()
{
    struct cse12 student[10];
    input(student);
    cgpasort(student);
    output(student);

    return 0;
}


