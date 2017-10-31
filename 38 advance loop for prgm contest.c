/// Advance loop for programming contest
#include<stdio.h>
int main()
{
    /**
    int a,b,sum;

    while(scanf("%d %d",&a,&b)!=EOF) //control Z
    {
        //scanf("%d %d",&a,&b);
       /* if(a==0 && b==0)
            return 0;
        *

        sum=a+b;
        printf("%d\n",sum);
    }
    */

    /*

    int a,b,sum,n,i;
    while(scanf("%d",&n)!=EOF) //control z
    {
       // if(n==0)
        //    return 0;
        sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%d\n",sum);
    }
    */
    int a,b,sum,n,i,T,j;

    scanf("%d",&T);

    //while(T--)
    for(j=1; j<=T; j++)
    {

        scanf("%d",&n);

        sum=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
        printf(" Case#%d : %d\n",j,sum);
    }


    return 0;
}
