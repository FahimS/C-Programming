///difference btw char array & string

#include<stdio.h>
int main()
{
    char ch[100];
    int i=0;
    //scanf("%s",ch);///string er khetre & use korte parbona
    gets(ch);
    //ch[4]='\0';

   /* ch[0]= 'H' ;
    ch[1]= 'S' ;
    ch[2]= 'T' ;
    ch[3]= 'U' ;
    ch[4]= '\0' ;
    ch[5]= 'f' ;
    ch[6]= 'g' ;
    ch[7]= 'h' ;
*/
    printf("%s",ch);

  /*  while(ch[i]!='\0')
    {
        printf("%c",ch[i]);
        i++;
    }
    */
    return 0;
}

