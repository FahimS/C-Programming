#include<stdio.h>
#include<stdlib.h>


int main()
{

    //int arr[100];
    int *ptr;
    ptr=(int*)malloc(100*sizeof(int));
    /*ptr= (int *)malloc(5*sizeof(int));
    ptr[1]=5;
    printf("%d\n",ptr[1]);
    ptr= (int *)malloc(10*sizeof(int));

    printf("%d",ptr);
    */


    free(ptr);

    return 0;
}

