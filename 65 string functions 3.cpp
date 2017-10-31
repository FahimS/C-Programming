/**

strchr(str,ch)
strrchr(str,ch) ///pison theke count kore
strschr(str1,str2) ///carechter/word found kore
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="My name is Fahim";
    int address,base;
    base=(int)(str);
    address=(int)strchr(str,'F');
    if(address==0)
    {
        printf("Not found");
    }
    else
        printf("Found at position %d",address-base+1);



    return 0;
}
