#include<stdio.h>
int main()
{

    ///int int; /// data type, keyword এগুলো variable হিসেবে নেওয়া যাবে না
    int num;   ///int, double, float, char
    num=5;
    printf("%d\n",num);
    printf("%d\n",sizeof(int));  /// int data type এর size বের হবে

    /**char num;
    num='A';
    printf("%c\n",num);
    printf("%d\n",sizeof(char));
    **/

    /**
    float num;
    num=1.5;
    printf("%f\n",num);
    printf("%.2f\n",num);
    printf("%d\n",sizeof(float)); // কতটুকু জায়গা নেয়
    **/

    /**
    double num;
    num=1.5;
    printf("%lf\n",num);
    printf("%.2lf\n",num);
    printf("%d\n",sizeof(float)); // কতটুকু জায়গা নেয়
    **/

    return 0;
}
