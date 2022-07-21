///Write a function named string_concat() which will
///take two strings A and B as parameters and make concatenation of A and B
///into A without using any library function i.e. strcat
#include<stdio.h>

void string_concat( char a[], char b[] ){
    int len = 0;
    while( a[len] != '\0' ){
        len++;
    }
    int i = 0;
    while( b[i] != '\0' ){
        a[len] = b[i];
        len++;
        i++;
    }
}

int main(){
    char a[100]="Maruf ", b[100]="Mobin";
    string_concat(a,b);
    printf("%s", a);
}
