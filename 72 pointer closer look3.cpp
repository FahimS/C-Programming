#include<stdio.h>
int main()
{
   /* int *p,*q;
    int x,y;
    p=&x;
    x=5;
    //y=*p;
    //y=*(&x);
    q=&(*(&x));
    *p=6;
    printf("%d",*q);
*/

    int arr[100];
    int *p;
    scanf("%d",&arr[0]);
    p=arr;
    ///scanf("%d",&arr[0]);
    ///arr==&arr[0];
    //printf("%d %d",arr,&arr[0]);
    printf("%d",*p);

    return 0;
}
