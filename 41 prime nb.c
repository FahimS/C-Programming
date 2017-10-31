/** ps 4: sum of prime number btw m & n

input: 2
       1 10
       5 3

input: 17
       8

    */

#include<stdio.h>
int main()
{
    int chack, a,i,m,n,j,sum,temp,T;
    //sum=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&m,&n);

    if(m>n)
    {
        temp=m;
        m=n;
        n=temp;
    }
    sum=0;

    for(j=m; j<=n; j++)
    {
        a=j;
        chack=1;
        if(a==1)
            chack=0;

        for(i=2; i<a; i++)
        {
            if(a%i==0)
                chack=0;
        }

        if(chack==1)
        {
            sum=sum+a;
            //printf(" %d Prime\n",a);
        }

        // else
        //  printf(" %d Not Prime\n",a);
    }
    printf("%d\n",sum);
    }

    return 0;
}
