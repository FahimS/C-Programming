#include<stdio.h>
#include<stdio.h>

struct Structure{
    char name[12];
    int value;

};
void swap (struct Structure *a,struct Structure *b)
{
    struct Structure temp;

    strcpy(temp.name,a->name);
    temp.value =a->value;
    strcpy(a->name,b->name);
    a->value =b->value;
    strcpy(b->name,temp.name);
    b->value =temp.value;

}

int main()
{
    struct Structure val1,val2;

    printf("Enter val1 name and value\n");
    scanf("%s %d",val1.name,&val1.value);
    printf("Enter val2 name and value\n");
    scanf("%s %d",val2.name,&val2.value);

    if(val2.value>val1.value)
    {
        swap(&val1,&val2);
    }

    printf("val1 ( %d ) %s\n",val1.value,val1.name);
    printf("val2 ( %d ) %s\n",val2.value,val2.name);


    return 0;
}
