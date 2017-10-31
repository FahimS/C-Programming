#include<stdio.h>
int main()
{
    /*
    int a,*pa=&a;
    char c,*pc=&c;
    float f,*pf=&f;
    double d,*pd=&d;

    printf("%d %d %d %d\n",pc,pa,pf,pd);
    pa++;
    pc++;
    pd++;
    pf++;
printf("%d %d %d %d\n",pc,pa,pf,pd);
*/
    int a=5,*p=&a;
    printf("%d %d %d\n",a,*p,p);
    (*p)++;
    printf("%d %d %d",a,*p,p);

    return 0;
}
