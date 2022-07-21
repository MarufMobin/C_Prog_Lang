#include<stdio.h>

void makeEqualToAvarage( int *pa , int *pb ){
    int av = ( *pa + *pb ) / 2;
    *pa = *pb = av;
}
int main(){

    int a = 5, b = 10;
    makeEqualToAvarage( &a , &b );
    printf("%d %c", a, b);

}
