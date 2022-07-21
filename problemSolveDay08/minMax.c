#include<stdio.h>

int main(){

//    int a = 3, b = 2;
//    if( a > b ){
//        printf("%d is The bigger Number by %d", a , b);
//    }else{
//        printf("%d is The bigger then %d", b, a);
//    }
//    int a = 10, b = 30;
//    int max_ab;
//
//    if( a > b ){
//        max_ab = a;
//    }else{
//        max_ab = b;
//    }
//    printf("%d", max_ab );

    // Using Ternary Operator for find larger number

    int a = 40 , b = 30;

    int max_ab = a > b ? a : b;
    int min_ab = a < b ? a : b;

    printf("%d %d", max_ab, min_ab);
}
