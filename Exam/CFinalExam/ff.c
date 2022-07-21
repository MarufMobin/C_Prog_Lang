#include<stdio.h>

int main(){

    int n, k;
    scanf("%d %d", &n, &k );
    int x = 1;
    for( int i = 0; i < n; i++ ){
        int a = x*2;
        int b = x+k;
        if( a < b ){
            x = a;
        }else{
            x = b;
        }
    }
    printf("%d",x);
    return 0;
}
