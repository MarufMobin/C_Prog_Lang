#include<stdio.h>
int main(){
    int n, mul;
    scanf("%d", &n);

    int ar[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &ar[i]);
        for( int j = 0; j < i; j++ ){
            if( ar[i] != ar[j] ){
                continue;
            }else{
                return 0;
            }
        }
    }
    scanf("%d", &mul);

    for( int i = 0; i < n; i++ ){
        for( int j = i; j < n; j++ ){
            if( ar[i] * ar[j+1] == mul ){
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");

    return 0;
}

