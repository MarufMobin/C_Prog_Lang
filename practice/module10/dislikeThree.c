#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);
    for( int i = 1; i <= t; i++ ){
        int k;
        scanf("%d", &k);
        if( k % 3 == 0 || k / 3 == 0 ) continue;
        printf("%d\n",k);
    }
    return 0;
}
