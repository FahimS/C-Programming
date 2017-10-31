#include<stdio.h>
int main()
{
    int  a[5][5];
    int i,j;
    for(j=0; j<5; j++)
    {
        for(i=0; i<5; i++)
        {
            scanf("%d",&a[j][i]);
        }
        printf("%d",a[2][2]);
    }

    return 0;
}
