#include<stdio.h>

int main(){
    //This is Vanry Water Code
    int n,h;
    scanf("%d %d", &n,&h);
    int x,ans=0;
    for( int i = 1; i <= n; i++){
        scanf("%d",&x);
        ans++;
        if( x > h ) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
