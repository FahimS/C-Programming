#include<stdio.h>
int main()
{
    char str[100];
    int w,d;
    w=8;
    d=4;
    gets(str);
    //printf("%s",str);
    //puts(str);
   // printf("%8.3s",str);
   printf("%*.*s",w,d,str);

    return 0;
}
