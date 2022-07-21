#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

int main(){

    struct Date today = { 19, 07, 1999 };
    //Jodi akti ke change krte hoi tobe
    //today.year = 2008;
    //Jodi sob gulow ke change krte hoi tile
    today = (struct Date) { 1, 1, 2000 };
    printf("%d-%d-%d", today.day, today.month, today.year );

}
