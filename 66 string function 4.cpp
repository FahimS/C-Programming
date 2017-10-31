/**

strspn(str1,str2)//letter thakle count hobe
strcspn(str1,str2)//letter na thakle count hobe
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100]="my name is fahim";
    char str2[100]="abcdefghijkklmnopqrstuvwxyz";
    int len;

    len=strspn(str1,str2);
    printf("%d\n",len);

    len=strcspn(str1,str2);
    printf("%d\n",len);
    return 0;
}

