///array basic input output

#include<stdio.h>
int main()
{
    /*
    int num1,num2,num3,num4,sum;
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);

    sum=num1+num2+num3+num4;

    printf("%d\n",sum);

    */

    int sum,n,i;
    int num[4];
    sum=0;

    for(i=0;i<4;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("%d\n",sum);


    return 0;
}
