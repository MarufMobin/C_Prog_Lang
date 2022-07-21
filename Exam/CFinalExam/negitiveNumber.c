#include<stdio.h>

int main(){

    int t, n;
    scanf("%d %d", &t , &n);
    int arr[t];

    for( int i = 0; i < t; i++ ){
        scanf("%d",&arr[i]);
    }

    for( int i = 0; i < t; i++ ){
        for( int j = i; j < t; j++ ){
            if( arr[i] > arr[j] ){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    unsigned int ans = 0;
    for( int i = 0; i < n; i++ ){
        if( arr[i] < 0 ){
            ans += -arr[i];
        }
    }
    printf("%d", ans);
    return 0;
}
