///write something in a file(named file1.txt)
///copy all text from file1 to another file named file2.txt

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fp1,*fp2;
    char ch[100];

    fp=fopen("file1.text","w");
    scanf("%s",ch);
    fprintf(fp,"%s",ch);
   fclose(fp);

    fp1=fopen("file1.txt","r");
    if(fp1==NULL)
    {
        printf("File Not Found");
    }
    fp2=fopen("file2.txt","w");

    fscanf(fp1,"%s",ch);
    fprintf(fp2,"%s",ch);

    fclose(fp1);
    fclose(fp2);


    return 0;
}
