#include<stdio.h>
int main(){
    int a , b , c , d;
    scanf("%d %d %d %d", &a,&b,&c,&d);

    int sum = 0;
    if ( a > sum ) sum = a;
    if ( b > sum ) sum = b;
    if ( c > sum ) sum = c;
    if ( d > sum ) sum = d;

    if( a < sum ) printf( "%d", sum - a );
    if( b < sum ) printf( "%d", sum - b );
    if( c < sum ) printf( "%d", sum - c );
    if( d < sum ) printf( "%d", sum - d );
    return 0;
}
