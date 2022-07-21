///Write a function named reverse_array() which will take an array, size of that array and reverse that array. You don’t need to
///return anything because if you reverse that array, the changes will be applied to the original array also

#include<stdio.h>

void reverse_array(int arr[], int size ){
    for( int i = 0, j = size-1; i < j; i++, j-- ){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main(){
    int arr[100]={1, 2, 3, 4, 5};
    reverse_array(arr,5);
    for( int i = 0; i < 5; i++ ){
        printf("%d ", arr[i]);
    }
}
