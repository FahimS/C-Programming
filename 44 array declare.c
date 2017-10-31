///array declare

#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},i;
    a[0]=5;
    a[2]=6;

    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }


    return 0;
}

