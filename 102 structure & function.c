#include<stdio.h>

struct structure
{
    int x;
    float y;
};

void print(struct structure pr)
{
    printf("x =%d\n",pr.x);
    printf("y =%f\n",pr.y);
}
struct structure add(struct structure a,struct structure b)
{
    struct structure result;
    result.x=a.x+b.x;
    result.y=a.y+b.y;

    return result;
};

int main()
{
    struct structure mem,mem1,sum;
    mem.x=5;
    mem.y=6.6;
    printf("\t Before assign");
    printf("mem\n");
    print(mem);
    printf("mem1\n");
    print(mem1);
    mem1=mem;
    printf("\t after assign");
    printf("mem\n");
    print(mem);
    printf("mem1\n");
    print(mem1);

    sum=add(mem1,mem);
    //sum=mem+mem1;
    printf("Sum\n");
    print(sum);

    return 0;
}
