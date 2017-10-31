#include<stdio.h>
int main()
{

    int a,b,i,j;

    /*

    for(j=1; j<=5; j++)
    {
        scanf("%d %d",&a,&b);

        for(i=a; i<=b; i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    */

    for(j=1; j<=5; j++)
    {
        scanf("%d %d",&a,&b);

        while(a<=b)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }


    return 0;
}
