/// exmpl: using of global variable & pointer

#include<stdio.h>
/**using global variable
int m,n,o,p;
void abc(int a,int b)
{
    m=a+b;
    n=a-b;
    o=a*b;
    p=a/b;
}
*/
///using pointer
void abc(int a,int b,int *sum,int *sub, int *mult, int *div)
{
    *sum=a+b;
    *sub=a-b;
    *mult=a*b;
    *div=a/b;
}
int main()
{
    int sum,sub,mult,div;
    int a,b;
    a=6,b=2;
    abc(a,b,&sum,&sub,&mult,&div);
    //sum=m,sub=n,mult=o,div=p;
    printf("%d %d %d %d\n",sum,sub,mult,div);

    return 0;
}

