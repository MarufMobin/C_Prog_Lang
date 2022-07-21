//To dynamically allocate an array of n elements and int type, we use the following syntax.

#include<stdio.h>

void findDouble( int n , int arr[] ){
    for( int i = 0; i < n; i++ ){
       printf("%d \n", arr[i] * arr[i] );
    }
}

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

     findDouble( n , arr );

}
