#include<stdio.h>
#include<stdlib.h>
int main()
{
    //FILE *fp;
    fp=fopen("new.text","w");
   printf("This is test file printf\n");
   //getchar();
   fprintf(fp,"This is test file fprint\n);
   fclose(fp);


    return 0;
}
