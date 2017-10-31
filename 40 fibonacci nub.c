/** ps 03: fibonacci number 0 1 1 2 3 5 13....

sample input:     3
                  3
                  4
                  7

sample output:
                  1
                  2
                  8

*/

#include<stdio.h>
int main()
{
    int n=5;
    int i,T;
    int a,b,c;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&n);
        a=0,b=1;
        //while(a<=50)
        for(i=1; i<=n; i++)
        {
            if(i==n)
                printf("%d\n",a);
            c=a+b;
            a=b;
            b=c;
        }
    }

    return 0;
}

