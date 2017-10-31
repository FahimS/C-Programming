#include<stdio.h>
#include<stdlib.h>
struct mystruct
{
    int a;
    struct mystruct *next;

};

void print(struct mystruct *ptr)
{
    if(ptr==NULL)
        return;
    printf("%d\n",ptr->a);
}

int main()
{
    struct mystruct a,b,c,d,e;
    a.a=5;
    a.next=NULL;
    print(&a);

    return 0;
}
