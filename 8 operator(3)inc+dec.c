/// increment decrement ++ --

#include<stdio.h>
 int main()
 {
     int a,b;
     a=5;
     a++;
     printf("%d %d\n",a,b);
     ++a;
     printf("%d %d\n",a,b);
     b=a++;
     printf("%d %d\n",a,b);
     b=++a;
     printf("%d %d\n",a,b);
     a--;
     printf("%d %d\n",a,b);
     --b;
     printf("%d %d\n",a,b);

     return 0;
 }

