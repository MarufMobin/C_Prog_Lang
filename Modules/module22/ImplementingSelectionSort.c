#include<stdio.h>
int min( int a , int b ){
    return a < b ? a : b;
}
void Swap( int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Sort( int n, int arr[]){
    for( int steps = 0; steps < n; steps++ ){
        int minelement = arr[steps] , pos = steps;
        for( int i = steps; i < n; i++ ){
            //minelement = min( minelement , arr[i]);
            if( arr[i] < minelement ){
                minelement = arr[i];
                pos = i;
            }
        }
        Swap( &arr[steps], &arr[pos] );
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &arr[i]);
    }
    Sort(n , arr);
    for( int i = 0; i < n; i++ ){
        printf("%d ", arr[i]);
    }
}
