#include<stdio.h>

/*int print (int a,int b)
{

    //printf("%d\n",a+b);
    return a+b;
}
*/
int power(int n,int pow)
{
    int mul=1,i;
    for(i=1;i<=pow;i++)
        mul=mul*n;

    return mul;
}

int main()
{
    //print(5,6);
    int ans;
    ans=power(2,3);

    //printf("%d\n",print(5,6));
    printf("%d\n",ans);

    return 0;
}
