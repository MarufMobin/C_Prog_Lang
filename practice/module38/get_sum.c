///Write a function named get_sum() which will take an array of integers as a parameter and return the sum of all elements of that array.

#include<stdio.h>

int get_sum( int arr[], int len ){
    int sum = 0;
    for( int i = 0; i < len; i++ ){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int arr[100]={1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int total = get_sum(arr,len);
    printf("%d", total );
}
