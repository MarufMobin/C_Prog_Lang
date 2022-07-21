#include<stdio.h>

int main(){

    float X;
    scanf( "%f", &X );
    float pointerNumber = X * 10;
    int diff = (int) pointerNumber % 10;
    if( diff >= 5 ){
        printf("%.0f", ceil(X));
    }else{
        printf("%.0f", floor(X));
    }
    return 0;
}
