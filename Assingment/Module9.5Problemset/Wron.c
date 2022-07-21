#include<stdio.h>

int main(){

    int n,k;
    scanf("%d %d", &n,&k);
    int sum = 0;
    int i = n;
    for( ; i > n-k; i--){
        if( i % 10 == 0 ){
           i /= 10;
        }
    }
    sum = i;

    printf("%d",sum);
}
