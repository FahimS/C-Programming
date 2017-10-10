///logical: && || !

#include<stdio.h>
int main()
{
    int math, physics, R;
    math=5;
    physics=5;
    R= math==5 && physics==5;
    //R= !(math==5);

    printf("%d",R);
    return 0;
}
