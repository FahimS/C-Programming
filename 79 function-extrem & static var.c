#include<stdio.h>

/*
int add(int a,int b)
{
    extern int c;
    c=a+b;

    return a+b;
}
int c;
*/
//int n=0;
int count()
{
    int a=0;
    static int n=0;
    n++;
    return n;
}
int c;

int main()
{
  /*  printf("%d ",c);
    add(5,6);
    printf("%d ",c);
*/

    printf("%d ",count());
    printf("%d ",count());

    return 0;
}
