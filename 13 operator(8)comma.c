///Comma : ( , , ,)

#include<stdio.h>
int main()
{
    int a,b;
    int cma;
    cma=(a=5, b=6, a+b);
    printf("%d",cma);
    cma=(a=5, b=6, a=5);
    printf("%d",cma);

    return 0;
}
