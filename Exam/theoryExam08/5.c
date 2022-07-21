//Make a function named check_array() which will take an array of integers and the size of that array N. It will return a boolean type whether this array has all values from 1 to N or not.

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool check_array( int arr[], int *n ){
   for( int i = 0; i < *n; i++ ){
        if( arr[i] != i ){
            return false;
        }
   }
   return true;
}
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for( int i = 0; i < n; i++ ){
        arr[i] = i;
    }
    int len = sizeof( arr )/ sizeof( arr[0] );
    bool ans = check_array( arr, &len );
    if( ans ){
        printf("All Value are Matched\n");
    }else{
        printf("No, All Value are not Matched\n");
    }
    return 0;
}
