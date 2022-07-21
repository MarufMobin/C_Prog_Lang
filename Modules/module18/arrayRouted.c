#include<stdio.h>

void rotate( int n, int array[]){
    int first = array[0];
    for( int i = 0; i < n-1; i++ ){
        array[i] = array[i+1];
    }
    array[n-1] = first;
}
void rotateByK( int n, int array[], int k ){
    k = k%n;
    for( int i = 0; i < k; i++ ){
        rotate( n , array );
    }
}
int main(){

    int n;
    scanf("%d", &n);
    int array[n];
    for( int i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }

    int k;
    scanf("%d", &k);
    rotateByK( n , array,k );

    for( int i = 0; i<n; i++){
        printf("%d ", array[i]);
    }

}
