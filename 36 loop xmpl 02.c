///example 02: take n integer as input and print their sum

///input format: n
     /// n1 n2 n3....nn
///output format: sum n

    ///sample input: 5
          ///        1 2 3 4 5
    ///sample output: 15

#include<stdio.h>
int main()
{
    int sum,a,i,n;

    sum =0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%d",sum);

    return 0;
}


