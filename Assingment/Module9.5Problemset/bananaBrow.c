#include<stdio.h>

int main(){

    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int cost_of_bananas = 0;
    for( int i = 1; i <= w; i++){
        cost_of_bananas += i;
    }
    printf("%d", n - cost_of_bananas );
    return 0;
}
