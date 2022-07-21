#include<stdio.h>
int make_sum( int n1, int n2 ){
    return n1+n2;
}
int main(){

    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int ans = make_sum(n1, n2);
    printf("%d",ans);
    return 0;
}
