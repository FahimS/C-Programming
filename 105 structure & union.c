#include<stdio.h>

struct mystruct{
    double a;
    int b;
    char c;
};
union myunion{
    double a;
    int b;
    char c;
};
int main()
{
   // printf("%d",sizeof(union myunion));
   union myunion ob;
   //struct mystruct ob;
   ob.a=2.3;
   ob.b=3;
   ob.c='a';

   printf("double=%lf\n",ob.a);
   printf("int=%d\n",ob.b);
   printf("char=%c\n",ob.c);

    return 0;
}

