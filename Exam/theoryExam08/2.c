//Make a function named make_average() which will take an array of integers and the size of that array and return the average of those values.

#include<stdio.h>
int make_average( int arr[], int *size ){
    int sum = 0;
    for( int i = 0; i < *size; i++ ){
        sum += arr[i];
    }
    int avarage = sum / *size;
    return avarage;
}
int main(){
    int arr[]={1, 4, 5, 6, 4, 5 };
    int len = sizeof( arr ) / sizeof( arr[0] );
    int avarage = make_average( arr, &len );
    printf("%d", avarage );
    return 0;
}
