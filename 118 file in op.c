///fprintf fscanf fread putc getc fputs fgets

#include<stdio.h>
#include<stdlib.h>
struct mystruct
{
    char name[20];
    char sid[20];
    char address[30];
};
int main()
{

    FILE *fp;
    struct mystruct in={"Sharif","16101036","Dhaka"};
    struct mystruct out;
    char str[100]="fahim";
    char str2[100];

    ///fp=fopen("Newfile.txt","w");
    ///fwrite(&in,sizeof(in),1,fp);

    fp=fopen("Newfile.txt","r");
    fread(&out,sizeof(in),1,fp);
    printf("%s,out.address");


    fclose(fp);




    /**
    FILE *fp;
    char str[100]="fahim";
    char str2[100];

    fp = fopen ("Newfile.txt","w");
    //fprintf(fp,"%s",str);
   /* fscanf(fp,"%s",str2);
    printf("%s",str2); /

    //putc(str[0],fp);

    /*str2[0]=getc(fp);
    putchar(str2[0]); /

    //fputs(str,fp);

    fgets(str2,3,fp);
    printf("%s",str2);
*/

    fclose(fp);


    return 0;
}

