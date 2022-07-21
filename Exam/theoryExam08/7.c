//Make a function named count_swaps() which will take an array of integers and the size of that array.
//You need to tell how many swaps you need while implementing the selection sort that is shown in the module
//video and return that number of swaps from that function.


#include<stdio.h>
#include<string.h>
int swap( int arr[], int len ){
    int count = 0;
    for( int i = 0; i < len; i++ ){
        for( int j = i; j < len; j++  )
        {
            if( arr[i] > arr[j] ){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count++;
            }
        }
    }
    return count;
}
int main(){

    int arr[] = { 1, 4, 6, 2, 3, 10 };
    int len = sizeof( arr ) / sizeof( arr[0] );
    int ans = swap( arr, len );
    printf("%d", ans);
//    for( int i = 0; i < len; i++ ){
//        printf("%d ", arr[i] );
//    }
 }
