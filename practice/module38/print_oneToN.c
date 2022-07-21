///Write a function named print_oneToN() which will take an integer value N as parameter and print all values from 1 to N inclusive. Inclusive means 1 and N will be also included.

#include<stdio.h>

int print_oneToN( int n ){
    for( int i = 1; i <= n; i++ ){
        printf("%d ", i);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    print_oneToN(n);
    return 0;
}
