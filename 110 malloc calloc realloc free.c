///malloc calloc realloc free()
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *str;
    str=(char*)calloc(5,1);

    strcpy(str,"abcde");
    printf("%s\n",str);

    //str=(char*)malloc(10*1);
    str=(char*)realloc(str, 10*1);
    //strcpy(str,"abcdefgh");
    printf("%s\n",str);

    free(str);

    return 0;
}



