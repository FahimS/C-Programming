#include<stdio.h>
int main()
{
    int i;
 /*   i=1;
    while (i<=5)
    {
        printf("%d ",i);
        i++;
    }
*/
    i=1;
    loop:
        printf("%d ",i);
        i++;

        if(i<=5)
            goto loop;
    return 0;
}

