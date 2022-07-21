#include<stdio.h>
int main(){

    int n ,sum = 0,remander;
    scanf("%d",&n);
    sum = 0;
    while( n != 0 ){
        remander = n % 10;
        sum += remander;
        n/=10;
    }
    printf("%d",sum);

}
