#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &arr[i]);
    }
    int revArr[n];

    int len = sizeof(arr)/sizeof(arr[0]);

    for( int i = 0, j = len-1; i < n; i++,j--){
        revArr[i] = arr[j];
    }
    for( int i =0; i < n; i++ ){
        printf("%d ",revArr[i]);
    }
    return 0;
}
