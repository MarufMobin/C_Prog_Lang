// Write a Program that Find first n fibonacci numbers
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int fibonacci[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for( int i = 2; i < n; i++ ){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    for( int i = 0; i < n; i++){
        printf("%d \t",fibonacci[i]);
    }
    return 0;
}
