#include<stdio.h>
int inc (int *a)
{
    (*a)++;
}
int main()
{
    int a=5;
    printf("Before inc: %d\n",a);
    inc(&a);
    printf("Before inc: %d\n",a);

    return 0;
}
