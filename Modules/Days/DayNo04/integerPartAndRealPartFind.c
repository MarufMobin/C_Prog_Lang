//Write a C program that takes a positive float number and outputs its integer part and real part.
//        Expected Input/Output:
//
//                Enter Number: 3.578
//
//                Integer part: 3
//
//                Real part: .578
//
//Hint: To find the real part, you can subtract the integer part from the number.


#include<stdio.h>

int main(){
    float reciveNumber;
    printf("Enter Number: ");
    scanf("%f", &reciveNumber);
    printf("Integer part: %d \n", (int)reciveNumber);
    printf("Real part: %.3f", reciveNumber-(int)reciveNumber);
    return 0;
}
