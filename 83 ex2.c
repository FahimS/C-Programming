/// create a function that count the number of a character (given in input) in a string
/**
sample input:     sample output:
    fahim a         1
    fahim z         0
*/

#include<stdio.h>
#include<string.h>

int count(char arr[],char ch)
{
    int /*ln,*/i,cnt=0;
    // ln=strlen(arr);
    //for(i=0;i<ln;i++)
        for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==ch)
            cnt++;
    }
    return cnt;
}

int main()
{
    char str[100],c;
    while(scanf("%s%*c%c",str,&c)!=EOF)
    {
        printf("%d\n",count(str,c));
    }
    //printf("%d",count("fahim",'a'));

    return 0;
}
