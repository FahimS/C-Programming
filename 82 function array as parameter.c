#include<stdio.h>
void abc(int arr1[5][10])
{
    //a=6;
    printf("Before change In abc function arr[4][2]=%d\n",arr1[4][2]);
    arr1[4][2]=100;
    printf("After change In abc function arr[4][2]=%d\n",arr1[4][2]);
}

int main()
{
    //int arr[5]={1,2,3,7,5};
    int arr[5][10];
    arr[4][2]=4;
    //int a=5;
    printf("Before change In main function arr[4][2]=%d\n",arr[4][2]);
    abc(arr);
    printf("After change In main function arr[4][2]=%d\n",arr[4][2]);

    //abc(arr,a);
    //printf("%d",a);

    return 0;
}

