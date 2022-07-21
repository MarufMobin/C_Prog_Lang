#include<stdio.h>
//Final comparing two Value which is big
int findMax( int a, int b ){
    if( a > b ) return a;
    else        return b;
}

//Get Max Function define here
int getMax( int n , int array[]){
    int ans = array[0];
    for( int i = 1; i < n; i++ ){
        ans = findMax( ans, array[i]);
    }
    return ans;
}

int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    for( int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    // Final out put here
    int result = getMax( n, array);
    printf("%d this is the output", result);
}
