///bitwise: & | ^ << >>

#include<stdio.h>
int main()
{
    int a,b;
    a=5,b=6;

    printf("%d %d %d %d\n",a,a&b,a|b, a^b);
    printf("%d %d",a<<5, a>>5);

    return 0;
}
