///strlen,strcpy,strcat,strcmp

#include<stdio.h>
#include<string.h>
int main()
{

   ///strlen:
   /*
    int ln;
    char s[15];
    scanf("%s",s);

    ln = strlen(s);

    printf("%d",ln);
    */
    ///strcpy:
    /*

    int ln;
    char s[15],s1[15];
    scanf("%s",s);

    strcpy(s1,s);

    printf("%s",s1);
    */

    ///strcat:
    /*

    int ln;
    char s[15],s1[15];
    scanf("%s",s);
    scanf("%s",s1);


    strcat(s," ");
    strcat(s,s1);

    printf("%s",s);
    */

    //strcmp:

    /*
    int ck;
    char s[15],s1[15];
    scanf("%s",s);
    scanf("%s",s1);

    ck=strcmp(s,s1);
    if(ck==0)
    {
        printf("Same");
    }
    else
        printf("Not same");

    printf("%s",s);
    */

    return 0;
}


