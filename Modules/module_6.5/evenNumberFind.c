// Write a C program that prints all even numbers between 1 and n (inclusive), where n is taken as input.
#include<stdio.h>

int main(){

    int n;
    printf("Please Give me a Number : " );
    scanf("%d",&n);
    system("@cls||clear");
    for( int i = 1; i <= n; i+=2 ){

        printf("%d \n", i);

    }

}
