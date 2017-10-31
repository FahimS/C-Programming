#include<stdio.h>
#include<string.h>
int main()
{
   /* int arr[10]={2,4,1,7,4,3,9};
    int *p;

    //p=&arr[5];
    p=arr;
     *(p+5)=7;
    //printf("%d %d",*p,*(p+1));
    printf("%d\n",arr[5]);
*/
    char str[100]="hstu";
    char str1[100]="dinajpur";
    char *p;
   // strcpy(str,str1);
   // printf("%s\n",str);

    p=strcpy(str,str1+5);

    //printf("%s\n",str);
    printf("%d %d\n",p,str);

    return 0;
}
