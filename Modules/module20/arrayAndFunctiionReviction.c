#include<stdio.h>
void makeSquare( int n, int array[], int out[] ){
    for( int i = 0; i <= n; i++ ){
        out[i] = array[i] *array[i];
    }
    return out;
}

int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    for( int i = 0; i < n; i++){
        array[i] = i+1;
    }
    int sz = sizeof( array )/ sizeof( array[0] );

    int out[n];
    makeSquare( sz,array,out );
    for( int i = 0; i < n; i++ ){
        printf("%d \n", out[i]);
    }

}
