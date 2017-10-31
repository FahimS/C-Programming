///read, write, append

#include<stdio.h>
#include<stdlib.h>
int main()
{
    /*FILE *fp;
    fp= fopen("Newfile.txt","w");

    fprintf(fp,"This is new file\n");
    fclose(fp);
*/

     FILE *fp;
     int n;
     fp= fopen("Newfile.txt","r");
    scanf(fp,"%d",&n);
    fprintf(fp,"%d\n",n );
    //printf("%d\n",n);
    fclose(fp);

    fp= fopen("Newfile.txt","r");
    scanf(fp,"%d",&n);
    //fprintf(fp,"This is new file\n");
    printf("%d\n",n);
    fclose(fp);
    return 0;
}
