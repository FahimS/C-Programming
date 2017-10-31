/// string input a closer look of scanf,gets

#include<stdio.h>
int main()
{
    char str[100];
    //scanf("%[a-z A-Z 0-9]",str);
    //scanf("%[^\n]",str);

   // gets(str);
    scanf("%s%*c",str);
    printf("%s\n",str);
    gets(str);
    printf("%s\n",str);
    gets(str);
    printf("%s\n",str);

    return 0;
}
