#include<stdio.h>

int main(){
//    int n = 4;
//
//    for( int i = 1; i <= n; i++){
//        for( int j = 1; j <= i; j++ ){
//            printf("*");
//        }
//        printf("\n");
//    }
//    int n = 4;
//    for( int i = 1; i <= n; i++){
//        for( int j=1; j<=i; j++){
//            printf("%d", i);
//        }
//        printf("\n");
//    }
    int n = 4;
    int cur = 1;
    for( int i = 1; i <= n; i++){
        for( int j=1; j<=i; j++){
            printf("%d", cur);
            cur++;
        }
        printf("\n");
    }
}
