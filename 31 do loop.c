#include<stdio.h>
int main()
{

    int i;
    i=1;
    /*  do
      {
          printf("%d ",i);
          i++;
      }
      while(i<=5);
          */


loop:
    printf("%d ",i);
    i++;

    if(i<=5)
        goto loop;

    return 0;
}
