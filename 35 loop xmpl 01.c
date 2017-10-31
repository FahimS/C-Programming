///example 01: printf all integer btw m & n in accending order
///input: 6 12
///output: 6 7 8 9 10 11 12

///input: 6 2
///output: 2 3 4 5 6

#include<stdio.h>
int main()
{

    int i;
    int start,end;
    int temp;
    //start =6;
    // end =12;

    scanf("%d %d",&start,&end);

    if(start>end)
    {
        temp=start;
        start=end;
        end=temp;
    }

    for(i=start; i<=end; i++)
    {
        printf("%d ",i);
    }

    return 0;
}

