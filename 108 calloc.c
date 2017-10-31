#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *ptr;
    //ptr=(int*)malloc(100*sizeof(int));
    ptr=(int*)calloc( 10 , sizeof(int));

    ptr[1]=5;

    printf("%d\n",ptr[1]);

    ptr=(int*)calloc( 10 , sizeof(int));
    printf("%d\n",ptr[1]);

    free(ptr);


    return 0;
}


