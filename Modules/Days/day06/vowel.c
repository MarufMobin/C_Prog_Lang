#include<stdio.h>

int main(){

    char caracter;
    scanf("%c", &caracter);

    if( caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
        printf("Vowel");
    }else{
        printf("consonent");
    }

}
