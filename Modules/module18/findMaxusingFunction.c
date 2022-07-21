#include<stdio.h>

int max( int a, int b){

    if( a > b ) return a;
    else        return b;

}

int getMax( int n, int array[]){
    int ans = array[0];
    for( int i = 1; i < n; i++){
        ans = max( ans , array[i]);
    }
    return ans;

}

int main(){

    int n;
    scanf("%d",&n);
    int array[n];
    for( int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    int max = getMax( n, array);
    printf("%d This is the max Value in our Array \n", max);



}
