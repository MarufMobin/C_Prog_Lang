///Write a function named string_copy() which will take two strings A and B as parameters
///and make copy of B into A without using any library function i.e. strcpy

#include<stdio.h>

void string_copy( char a[], char b[] ){
    int i = 0;
    while( b[i] != '\0' ){
        a[i] = b[i];
        i++;
    }
    a[i]='\0';
}

int main(){

    char a[] = "Hello", b[]="World";
    string_copy( a, b);
   printf("%s", a);

    return 0;
}
