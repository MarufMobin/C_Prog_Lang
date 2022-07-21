#include<stdio.h>

int main(){

    char ch;
    scanf("%c",&ch);

    if( 'A' <= ch && ch<= 'Z'){
        printf("%c This is A UpperCase",ch);
    }else if( 'a' <= ch && ch <= 'z' ){
        printf("%c This is A LowerCase Carecter",ch);
    }else if( '0' <= ch && ch <= '9'){
        printf("%c this is A Number", ch);
    }else{
        printf("Others");
    }
}
