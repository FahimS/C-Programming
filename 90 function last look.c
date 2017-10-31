#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}


int sumdouble(int a,int b)
{
    return sum(a,b)+sum(a,b);
}
int main()
{
    printf("%d",sumdouble(5,6));

    return 0;
}
