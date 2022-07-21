#include<stdio.h>
#include <string.h>

int gcd(int a, int b){
    if (b == 0)  return a;
    return gcd(b, a % b);
}

int main(){

    int array[10];
    for (int i = 0; i < 10; i++)
    {
        scanf( "%d", &array[i] );
    }

    int result = array[0];
    for (int i = 0; i < 10; i++)
    {
        result = gcd(array[i], result);
        if(result == 1) result = 1;
    }
    printf( "%d", result );
    return 0;
}
