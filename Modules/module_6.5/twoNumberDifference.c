// Write a C program that accepts two integers and prints true if either one is 5 or their sum or difference is 5.

#include<stdio.h>
#include<stdbool.h>

int main(){
    int num1, num2, result1,result2;
    scanf("%d %d", &num1, &num2);
    result1 = num1 / num2;
    result2 = num1 + num2;
    if( result1 == 5   ){
        printf("True");
    }else if( result2 == 5 ){
        printf("True");
    }
}
