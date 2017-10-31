#include<stdio.h>
int main()
{
    int i;
   /* for(i=1;i<=5;i++)
    {
        printf("%d",i);
    } */
    i=1;
    loop:
    printf("%d ",i);
    i++;
    if(i<=5)
        goto loop;


    return 0;
}
