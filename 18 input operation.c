#include<stdio.h>
int main()
{
    int a,b,c;
    //float b;

    //scanf("%d %f",&a,&b);
    scanf("%3d%*d%d%*d",&a,&b,&c);

    printf("%d %d %d",a,b,c);

    return 0;
}


