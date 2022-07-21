///Write a function named get_min() which will take two integer values as parameters and return the minimum of them

#include<stdio.h>

int get_min( int a, int b ){
    if( a < b ) return a;
    else        return b;
}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    int minValue = get_min(a,b);
    printf("%d", minValue);

}
