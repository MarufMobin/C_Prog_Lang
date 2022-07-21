#include<stdio.h>
#include<string.h>
int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }
    int len = sizeof(a)/sizeof(a[0]) ;
    int result = 0;
    for( int i = 0; i < len; i++ ){
        result += a[i];
    }
    printf("%d", result);
    return 0;
}
