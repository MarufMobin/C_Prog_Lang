

//struct  Date {
//    int day;
//    int month;
//    int year;
//};
//
//struct Student{
//    char* name[100];
//    int class;
//    int roll;
//    struct Date dob;
//};
//
//struct Date getFirstDay( int year ){
//    struct Date ans = { 1, 1, year };
//    return ans;
//};


// Find Result for using Function
//
//#include<stdio.h>
//void *divided( int x , int y , int *vagfol , int *vagsesh ){
//    *vagfol = x/y;
//    *vagsesh = x%y;
//}
//
//int main(){
//
//    int a = 10, b = 3;
//
//    int vagfol , vagsesh;
//
//    divided( a, b, &vagfol, &vagsesh);
//
//    printf("%d %d \n", vagfol, vagsesh);
//
//}


// Find Vagfol and Vagsesh using Struct

#include<stdio.h>
struct Result {
    int vagfol;
    int vagshesh;
};

struct Result devided( int x, int y ){
//    struct Result result;
//    result.vagfol = x/y;
//    result.vagshesh = x%y;
//    return result;
    return ( struct Result ) { x/y , x % y };
};
int main(){
    int a = 10, b = 3;

    struct Result result = devided( a, b);
    printf("%d %d\n", result.vagfol, result.vagshesh);
}
