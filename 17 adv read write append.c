///r+ w+ a+

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fp1;
    char str[100];

    fp=fopen("new1.txt","w+");
    fp1=fopen("new2.txt","w+");

    fprintf(fp,"Bangladesh"\n);
    fscanf(fp1,"%s",str);
    printf("%s",str);
//fprintf(fp,"Bangladesh"\n);
    fclose(fp);
    fclose(fp1);


    return 0;
}
