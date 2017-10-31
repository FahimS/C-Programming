/// ps-9: check a string is palindrome or not

/**
input:
    madam
    did
    good

output:
        palindrome
        palindrome
        not palindrome

*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int ln,half,i,j,ck;
    while(scanf("%s",str)!=EOF)
    {
        ln=strlen(str);
        half=ln/2;
        ln=ln-1;
        ck=1;
        for(i=0; i<half; i++)
        {
            if(str[i]!=str[ln-i])
            {
                ck=0;
                break;
            }
        }

        if(ck)
        {
            printf("Palindrome\n");
        }
        else
            printf("Not Palindrome\n");
    }

    return 0;
}
