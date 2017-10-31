///header file ctype.h
/**  isprint,ispunct,isspace,iscntrl,
     isalnum. isalpha, isdigit,islower,isupper
     toascii,tolower,toupper
     */
#include<stdio.h>
#include<ctype.h>
int main()
{
    /*
    char ch;
    ch=getchar();
    if(isprint(ch))
        printf("Yes");
    else
        puts("No");
*/
/*
    int ascii;
    char ch;
    ch= getchar();
    ascii=toascii(ch);
    printf("%d",ascii);
*/

    char ch;
    char ch2;
    ch= getchar();
    ch2=tolower(ch);
    printf("%c %c",ch,ch2);
    return 0;
}
