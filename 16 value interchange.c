#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=5,b=6;
    printf("Before interchange a=%d b=%d\n",a,b);

    c=a;
    d=b;
    a=d;
    b=c;
    /*c=a;
      a=b;
      b=c;
      */

    printf("After interchange a=%d b=%d\n",a,b);
    return 0;
}
