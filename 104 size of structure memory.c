#include<stdio.h>
struct mystruct{
int a;
float b;
double db;
char c;
char d;
char e;
char f;
char g;
};
int main()
{
    struct mystruct obj;
    printf("%d",sizeof(obj));

    return 0;
}
