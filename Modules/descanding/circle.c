/*
    Write a Program to find the perimeter and area of a circle
    The program will ask the user for a radius.And then Print the perimeter and area

    Simple Interaction :
    Enter Radius : 1
    Perimeter = 6.28
    area = 3.14;

    Rerimeter = 2*pi*r;
    Area = pi * r ^ 2;


*/

#include<stdio.h>
int main(){
    //Primeter Find out Program
    printf("Enter Radius : ");
    double radius;
    scanf("%lf", &radius);
    const double PI = 3.1416;
    double primeter = 2 * PI * radius;
    printf("your Circle Primete is %lf \n", primeter);

    //Area Find Program will be here
    double area = PI * radius * radius;
    printf("Your Circle Radius %lf \n", area);
    getch();

    return 0;
}
