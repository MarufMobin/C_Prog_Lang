//Write a C program to input two numbers and perform all arithmetic operations to find sum, difference, product, quotient and modulus of two given numbers.
//Example
//
//Input
//
//First number: 10
//
//Second number: 5
//
//Output
//
//Sum = 15
//
//Difference = 5
//
//Product = 50
//
//Quotient = 2
//
//Modulus = 0


#include<stdio.h>

int main(){
    int firstNumber, secondNumber;
    printf("First Number : ");
    scanf("%d", &firstNumber);
    printf("Second Number : ");
    scanf("%d", &secondNumber);
    //Sum Find here
    printf("Sum = %d \n", firstNumber+secondNumber);
    //Difference
    printf("Difference = %d \n", firstNumber-secondNumber);
    // Product
    printf("Product = %d \n", firstNumber * secondNumber);
    //Quotient
    printf("Quotient = %d \n", firstNumber / secondNumber);
    //Modulus
    printf("Modulus = %d \n", firstNumber % secondNumber);
    getch();
    return 0;
}
