/// return value and function prototype

#include<stdio.h>
int abs (int a,int b);
int add (int a, int b);


int main()
{
    //add(5,6);
    printf("%d",abs(5,6));

    return 0;
}
int abs(int a,int b)
{
    int ad=add(a,b);
    if(ad<0)
        return -ad;
    else
        return ad;

}
int add (int a, int b)
{
    return a+b;
}
