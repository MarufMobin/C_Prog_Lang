#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
};

int daysInMonths[12] = { 31, 28, 31, 30, 31, 30, 31, 31 , 30, 31, 30, 31 };

int main(){
    struct Date start;
    scanf("%d %d %d", &start.day, &start.month, &start.year );

    struct Date nextDay = start;
    if( nextDay.day != daysInMonths[nextDay.month-1]){
        nextDay.day++;
    }else if ( nextDay.month != 12 ) {
        nextDay.day = 1;
        nextDay.month++;
    }else{
        nextDay.day = 1;
        nextDay.month = 1;
        nextDay.year += 1;
    }

    printf("Next Day: %d-%d-%d", nextDay.day, nextDay.month, nextDay.year );

}
