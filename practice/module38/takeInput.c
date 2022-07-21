/// Write a function named take_input() which will take an array and its size.
/// This function will take input of that array. After that print those values in the main() function.

#include<stdio.h>

void take_input( int arr[] , int size ){
    for( int i = 0; i < size; i++ ){
        scanf("%d", &arr[i]);
    }
}

int main(){
    printf("give a number of array size : ");
    int n;
    scanf("%d", &n);

    int arr[n];
    take_input( arr, n );

    int sum = 0;

    for( int i = 0; i < n; i++ ){
        sum+=arr[i];
    }

    printf("%d", sum );
    return 0;
}

