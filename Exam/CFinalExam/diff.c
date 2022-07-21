#include<stdio.h>

int main(){

    int t;
    scanf("%d", &t);
    while( t ){
        int n;
        scanf("%d", &n);
        int arr[n];

        for( int i = 0; i < n; i++ ){
            scanf("%d", &arr[i]);
        }

        for( int i = 0; i < n; i++ ){
         for( int j = i; j < n; j++ ){
            if( arr[i] > arr[j] ){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                }
            }
        }
        int min = arr[1]-arr[0];
        for( int i = 0; i < n-1; i++ ){
            int dif = arr[i+1] - arr[i];
            if( dif < min ){
                min = dif;
            }
        }
        printf("%d\n", min);
        t--;
    }
    return 0;
}
