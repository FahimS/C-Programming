#include<stdio.h>
struct create_account
{
    char first_name[50];
    char last_name[50];
    char user_name[50];
    char password[50];
    struct birth
    {
        int day;
        int month;
        int year;
    }birth;
    struct sex
    {
        int male;
        int female;
    }sex;
};
int main()
{
    struct create_account fahim;
    char passck[50];
    char sexck[50];
    printf("Enter your first name: ");
    scanf("%s",fahim.first_name);
    printf("Enter your last name: ");
    scanf("%s",fahim.last_name);
    printf("Enter your user name: ");
    scanf("%s",fahim.user_name);
    printf("Enter your password: ");
    scanf("%s",fahim.password);
    printf("Repeat your password: ");
    scanf("%s",passck);
    if(strcmp(fahim.password,passck)!=0)
    {
        printf("Wrong\n");
        return 0;
    }
    printf("Enter your Birthday: \n");
    printf("\tDay: ");
    scanf("%d",&fahim.birth.day);
    printf("\tMonth: ");
    scanf("%d",&fahim.birth.month);
    printf("\tYear: ");
    scanf("%d",&fahim.birth.year);
    printf("Enter your Sex(If male press m else press f: ");
    scanf("%s",sexck);
    if(strcmp(sexck,"m")==0 || strcmp(sexck,"M")==0)
    {
        fahim.sex.male=1;
        fahim.sex.female=0;
    }
    else if(strcmp(sexck,"f")==0 || strcmp(sexck,"F")==0)
    {
        fahim.sex.male=0;
        fahim.sex.female=1;
    }
    else
    {
        printf("Wrong\n");
        return 0;
    }
    printf("First name:%s\n",fahim.first_name);
    printf("Last name:%s\n",fahim.last_name);
    printf("User name:%s\n",fahim.user_name);
    printf("Password:%s\n",fahim.password);
    printf("Birthdate:%d / %d / %d\n",fahim.birth.day,fahim.birth.month,fahim.birth.year);
    printf("Sex : ");
    if(fahim.sex.male==1)
    {
        printf("Male\n");
    }
    if(fahim.sex.female==1)
    {
        printf("Female\n");
    }
    return 0;
}
