#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d", &t);

    for( int i = 0; i < t; i++ ){
        int n;
        scanf("%d", &n);
        int a[n];
        int len = sizeof(a)/sizeof( a[0] );
        for( int i = 0; i < n; i++ ){
            scanf("%d", &a[i]);
        }
        int count[11]={0};
        for( int i = 0; i < len; i++ ){
            printf("%d out\n", a[i]);
        }
    }

}
