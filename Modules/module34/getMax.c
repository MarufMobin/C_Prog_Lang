///Write a function named get_max() which will take two integer values as parameters and return the maximum of them.


#include<stdio.h>
int get_max( int a, int b ){
    if( a > b ) return a;
    else        return b;
}

int main(){
    int a , b;
    scanf("%d %d", &a, &b );
    int maxValue = get_max(a, b);
    printf("%d", maxValue);
    return 0;
}
