#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    //int x;
    //ptr=&x;
    ptr=malloc(4);
    printf("%d\n",ptr);
    //printf("%d",x);
    *ptr=5;
    printf("%d",*ptr);
    free(ptr);

    return 0;
}
