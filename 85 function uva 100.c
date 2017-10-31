#include<stdio.h>
long long uva100(long long n)
{
    //printf("%lld ",n);
    if(n==1)
    {
        return 1;
    }

    else if(n&1)
    {
        return uva100(3*n+1)+1;
    }
    else
        return uva100(n/2)+1;

}

long long mxcycle(long long a,long long b)
{
    if(a>b)
    {
        return mxcycle(b,a);
    }
    long long mx=0,cycle;
    while(a<=b)
    {
        cycle=uva100(a);
        if(mx<cycle)
            mx=cycle;
            a++;
    }
    return mx;
}

int main()
{
    // long long n;
    // n=22;
    // long long count=0;
    /* while(1)
     {
        //printf("%lld ",n);
        count++;
        if(n==1)
        break;

        if(n&1)
        {
            n=3*n+1;
        }
        else
         n=n/2;
     }
     printf("%lld\n",count); */
    //printf("%lld\n",uva100(22));
    long long a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    printf("%lld %lld %lld\n",a,b,mxcycle(a,b));

    return 0;
}
