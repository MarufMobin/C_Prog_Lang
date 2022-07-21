#include<stdio.h>
#include<stdbool.h>
int main(){
    int year = 2000;
    bool is_leap_year = (year%4 == 0 )&& (year%100 != 0 || year %400 == 0);
    if( is_leap_year ){
        printf("This year is Leap Year", year);
    }
}
