//#include<stdio.h>
//#include<stdbool.h>
//
//struct Date{
//    int day;
//    int month;
//    int year;
//};
////int getMonth( struct Date date ){
////    return date.month;
////}
//bool isFirstDay( struct Date date ){
//    return date.day == 1 && date.month == 1;
//}
//
//int main(){
//
//    struct Date date={ 1 , 1, 2000 };
////    int out = getMonth(date);
////    printf("%d", out);
//
//    if( isFirstDay( date ) ){
//        printf("Happy New Year");
//    }
//}
#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
};
struct Date getFirstDay( int year ){
    struct Date ans = { 1, 1, year };
    return ans;
};
void printDate( struct Date date ){
    printf("%d-%d-%d", date.day, date.month, date.year);
}
int main(){
    struct Date date = getFirstDay(2020);
    printDate(date);
}
