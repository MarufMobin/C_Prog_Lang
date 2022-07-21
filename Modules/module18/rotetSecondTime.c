#include<stdio.h>
void rotet( int n, int array[] ){
    int firstArray = array[0];
    for( int i = 0; i < n-1; i++ ){
        array[i] = array[i+1];
    }
    array[n-1] = firstArray;
}

void rotedByK( int n, int array[], int k ){
    k = k % n;
    for( int i = 0; i < k ; i++ ){
        rotet( n , array );
    }
}

int main(){

    int n;
    scanf("%d", &n);
    int array[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &array[i]);
    }
    int k;
    scanf("%d",&k );
    rotedByK( n, array, k);

    for( int i = 0; i < n; i++ ){
        printf("%d ", array[i]);
    }

}
