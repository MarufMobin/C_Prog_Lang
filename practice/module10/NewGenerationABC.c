#include<stdio.h>

int main(){

    int N;
    scanf("%d",&N);

    if( N <=  1 || N <= 125 ){
        printf("%d",4);
    }else if( N <= 126 || N <= 211 ){
        printf("%d", 6);
    }else if( N <= 212 || N <= 214 ){
        printf("%d", 8);
    }
    return 0;
}
