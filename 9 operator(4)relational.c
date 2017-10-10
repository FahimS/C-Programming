///Relational operator:
/// > >= < <= == !=
/// soto kina/boro kina/soman kina

#include<stdio.h>
int main()
{
    int a,b,c;
    a=5;
    b=6;
    c=a>b;
    printf("%d\n",c);
    c= a>=b;
    printf("%d\n",c);
    c= a<b;
    printf("%d\n",c);
    c= a<=b;
    printf("%d\n",c);
    c= a==b;
    printf("%d\n",c);
    c= a!=b;
    printf("%d\n",c);

    return 0;
}
