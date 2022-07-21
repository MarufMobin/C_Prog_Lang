#include<stdio.h>

int main(){
    //Out put print PerPuss
    char str[] = "Hello World";
//    printf("%s\n", str);
//    puts(str);
    // Input PerPuss

    printf("Enter your name: ");
    char name[100];
    //scanf("%s",name);
    //gets(name);
    fgets(name, 100, stdin);
    printf("Hello, %s\n", name);

}
