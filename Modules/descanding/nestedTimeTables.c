#include<stdio.h>

int main(){

    printf("Please give me one Number ");
    int timeTableNumber , i, ml;
    scanf("%d", &timeTableNumber);
    for( i = 1; i <= 10; i++){
        for( ml=1; ml<=10; ml++){
            int nestedTable = i * ml;
            printf("%d X %d = %d \n", i, ml, nestedTable );
        }
    }
    getch();
    return 0;
}

