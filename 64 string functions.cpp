/**
    strlen(str);
    strcpy(str1,str2);
    strcpy(str1,str2,n);
    strcat(str1,str2);
    strcat(str1,str2,n);
    strcmp(str1,str2);
    strcmp(str1,str2,n);
    strcoll(str1,str2);
 */

#include<stdio.h>
#include<string.h>
int main()
{
   /* char str[100]="hstu";

    printf("%d\n",strlen("dinajpur"));
*/
/*

    char str1[100]="hstu";
    char str2[100]="dinajpur";

   // strcpy(str1,str2);
    strncpy(str1,str2,3);
    str1[3]='\0';


    printf("%s\n",str1);
*/

/*
    char str1[100]="hstu";
    char str2[100]="dinajpur";

    strcat(str1," ");
    strcat(str1,str2);
    printf("%s\n",str1);

*/
/*
    char str1[100]="hstu";
    char str2[100]="dinajpur";


    strncat(str1,str2,3);
    printf("%s\n",str1);
*/
/*
    char str1[100]="BAZ";
    char str2[100]="BAZ";

    if(strcmp(str1,str2)==0)
    {
        printf("They r same\n");
    }


    printf("%d",strcmp(str1,str2));
*/
/*
    char str1[100]="BAZ";
    char str2[100]="BAZ";

    if(!strncmp(str1,str2,2))
    {
        printf("They r same\n");
    }

    //printf("%d",strncmp(str1,str2,2));
*/


    char str1[100]="BAB";
    char str2[100]="BAB";

    printf("%d",strcoll(str1,str2));
    return 0;
}
