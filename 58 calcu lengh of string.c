#include<stdio.h>
int main()
{
    //char ch[10]="Sharif";
    char ch[10]="HSTU";
    int ln,i;
    i=0;
    /*while(ch[i]!='\0')
    {
        i++;
    }
    ln=i;
    printf("%d",ln);
    */
    for(ln=0; ch[ln]!='\0'; ln++);

    printf("%d",ln);
    return 0;
}
