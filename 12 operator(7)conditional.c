/// Conditional: (exp1)? true : false

#include<stdio.h>
int main()
{
    int a,b,c;
    a=5;
    b=10 ;

    //(a<b) ? printf("%d",a): printf("%d",b+1);
    c=(a<b) ? a: b;
    printf("%d",c);

    return 0;
}
