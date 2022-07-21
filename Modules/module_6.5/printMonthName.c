//Write a C program that reads an integer between 1 and 12 and print the month of the year in English.  Use switch case.
#include<stdio.h>

int main(){
    int nameOfMonth;
    printf("Input a number between 1 to 12 to get the month name: ");
    scanf("%d", &nameOfMonth);
    switch(nameOfMonth){
        case 1:
        printf("january");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("Jun");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("Agust");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("Desember");
        break;
    default:
            printf("Unknown Value");
            break;
    }
}
