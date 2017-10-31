#include<stdio.h>
int main()
{
    /*

    int i,a;
    a=5;

    for(i=1;i<=5;i++)
    {
        scanf("%d",&a);
        printf("%d\n\n",a);
    }
    */

    int i,a;
    a=5;
    i=1;

   /* for(i<=5) ///while
    {
        scanf("%d",&a);
        printf("%d\n\n",a);
        i++;
    }
    */

    /*
    scanf("%d",&a);
    while(a!=0)
    {
        printf("%d\n\n",a);
        scanf("%d",&a);
    }
    */

    while(scanf("%d",&a) && a!=0)
    {
        printf("%d\n\n",a);

    }

    return 0;
}

