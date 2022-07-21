#include<stdio.h>
int* returnPointer( int n, int a[] ){
    int *output = (int*) malloc( n*sizeof(int));
    for( int i = 0; i < n; i++ ){
        output[i] = a[i];
    }
    return output;
}
int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }

    int *result = returnPointer( n, a );

    for( int i = 0; i < n; i++ ){
        printf("%d ", result[i]);
    }
}


