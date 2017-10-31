///compare 2 string same or not

#include<stdio.h>
int main()
{
    char s[15],s1[15];
    int ck,i;
    scanf("%s%s",s,s1);

    ck=1;
    i=0;

    while(s[i]!='\0' || s1[i]!='\0')
    {
        if(s[i]!=s1[i])
        {
            ck=0;
            break;
        }
        i++;
    }

    if(ck==1)
        printf("same\n");
    else
        printf("Not same\n");


    return 0;
}
