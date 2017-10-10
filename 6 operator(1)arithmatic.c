/// Arithmetic operator
// Integer Operator + - * / %
//real operator + - * / (float) নিয়ে কাজ করলে real

#include<stdio.h>
int main()
{
    int num1,num2,res;
    num1=5,num2=2;

    res= num1+num2;
    ///res= num1/num2;
    ///res= num1 % num2;

    printf("%d + %d = %d",num1,num2,res);
    ///printf("%d / %d = %d",num1,num2,res);
    ///printf("%d %d = %d",num1,num2,res);
    /*
         ///real
        float num1,num2,res;
        num1=5,num2=2;

        res= num1/num2;

        printf("%f / %f = %f",num1,num2,res);

    */
    return 0;
}

