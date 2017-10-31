///ps 02: 5! = 1*2*3*4*5

/**
input 5
      6
      0

output 120
       720
       1
*/

#include<stdio.h>
int main()

{
    int fact,i,n;
    while(scanf("%d",&n)!=EOF)
    {
        fact=1;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("%d",fact);
    }

    return 0;
}
