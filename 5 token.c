 #include<stdio.h>
 int main()
 {
     int var;
     var=5;

     printf("%d",var+5);

     return 0;
 }

/** tokens are
keyword- function/variable হিসাবে  declare করতে পারিনা
identifiers- কিছু  word যা দেখে আমি বুঝব এর কাজ কি, যেমন  main, printf
constant- যেমন variable এর মান constant, এর মান change  হয় না
symbols- means  ; ,"", এগুলা
operators- +,-,/,%
string- charecter
ex- char name[5]="fahim"; // f a h i m =5
    char name[10]="fahim";
    char name[3]="fahim";//error
    printf("%s",name);
