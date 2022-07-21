#include<stdio.h>
#include<string.h>

int main(){

    char name[100];
    gets(name);
    int length = strlen(name);
    if( length % 2 == 0 ){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }

    return 0;
}
