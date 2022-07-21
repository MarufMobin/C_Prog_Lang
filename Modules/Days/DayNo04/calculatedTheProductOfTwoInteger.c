//Write a C program that accepts two integers from the user and calculate the product of the two integers.
//Expected Input/Output:
//
//Input the first integer: 25
//
//Input the second integer: 15
//
//Expected Output:
//
//Product of the above two integers = 375

#include<stdio.h>

int main(){
    int firstNumber, secondNumber;
    printf("Input the first integer: ");
    scanf("%d", &firstNumber);
    printf("Input the second integer: ");
    scanf("%d", &secondNumber);
    int production = firstNumber * secondNumber;
    printf("Product of the above two integers = %d", production);
    getch();
    return 0;
}
