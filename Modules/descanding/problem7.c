#include<stdio.h>

int main(){
    int height;
    printf("Enter height is inches: ");
    scanf("%d", &height);
    int feet, inches;
    feet = height / 12;
    inches = height % 12;
    printf("Your height is %d feet %d inches", feet, inches);
    getch();
    return 0;
}
