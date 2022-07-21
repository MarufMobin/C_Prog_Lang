#include<stdio.h>

int main(){

    int a = 7, b = 8;

    if( a < b ){
        printf("A < B \n"); // print hbe
    }
    if( a <= b ){
        printf("A <= B \n"); // print hbe
    }
    int c = 8 , d = 8;
    if( c == d ){
        printf("C == D \n");
    }
    int e = 3, f = 4;
    if( e != f){
        printf("E != F \n");
    }
    int l = 8,k = 9 ,comp = (l < k);
    printf("Comp  = %d", comp);
    return 0;

}
