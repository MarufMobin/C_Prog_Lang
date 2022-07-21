#include<stdio.h>

int main(){
    // Gerbej Value
    int mathNumber;
    int englishNumber;
    float temprature;
    printf("Enter Your MathNumber , Enter Your English number , temprature");
    scanf("%d, %d, %f ", &mathNumber, &englishNumber, &temprature );
    int totalNumber = mathNumber + englishNumber + temprature;
    printf("Total Number is %d", totalNumber);
    getch();
    return 0;
}
