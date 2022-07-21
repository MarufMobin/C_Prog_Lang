//Make a function named change_array() which will take an integer array and size of that array. After that you will reverse that array and put that in a new array and print it in the main() function. You know that you can’t return an array normally, so you need to make that array in the main() function and pass that through the parameter.

#include<stdio.h>

void change_array( int arr[], int len, int newArr[] ){
      for( int i = 0, j = len-1; i < len; i++, j-- ){
            newArr[j] = arr[i];
      }
}

int main(){

    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int len = sizeof( arr ) / sizeof( arr[0] );
    int newArr[len];
    change_array( arr, len, newArr );
    // Print the Another Array
    for( int i = 0; i < len; i++ ){
        printf("%d ", newArr[i]);
    }
}
