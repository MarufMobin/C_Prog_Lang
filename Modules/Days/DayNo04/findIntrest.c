//Write a C program to input principle, time and rate (P, T, R) from the user and find Simple Interest and principal plus interest.
//Example
//
//Input
//
//Enter principle: 1200
//
//Enter time: 2
//
//Enter rate: 5.4
//
//Output
//
//Simple Interest = 129.600006
//SI = p X T X R / 100
//Principal + Interest = 1329.6
//Hint: Formula to find simple interest:

#include<stdio.h>

int main(){
    int principle,time;
    float rate;
    printf("Enter Principle : ");
    scanf("%d", &principle);
    printf("Enter Time : ");
    scanf("%d",&time);
    printf("Enter rate : ");
    scanf("%f", &rate);
    float si = principle * time * rate / 100 ;
    printf("Simple Interest = %f \n", si);
    printf("Principal + Interest %.1f", si + principle);
    getch();
    return 0;
}
