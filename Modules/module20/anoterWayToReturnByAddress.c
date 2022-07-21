#include<stdio.h>
void makeSquares( int n, int ans[] ){
    for( int i=0; i < n; i++ ){
        ans[i] = ( i + 1 ) * ( i + 1 );
    }
    return ans;
}
int main(){

    int n=5;
    int ans[n];
    makeSquares(n, ans);

    for( int i = 0; i < n; i++ ){
        printf("%d \n",ans[i]);
    }

}
