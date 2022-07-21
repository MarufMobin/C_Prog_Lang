//Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.
//Example
//
//Input
//
//Temperature in fahrenheit = 205
//
//Output
//
//Temperature in celsius = 96.11 C
//
//
//Hint: Formula to convert from degree Fahrenheit to degree Celsius is given by

#include<stdio.h>

int main(){
    int fahrenheit;
    printf("Temperature in fahrenheit = ");
    scanf("%d", &fahrenheit);
    printf("Temperature in celsius = %.2f C", ((float)fahrenheit-32)*5/9 );

    getch();
    return 0;
}
