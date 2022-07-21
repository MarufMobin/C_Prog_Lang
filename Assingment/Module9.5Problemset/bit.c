#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int x = 0;
    for( int i = 0; i < n; i++){
        char a,b,c;
        scanf(" %c%c%c", &a, &b ,&c);
        if( b == '+' )        x++;
        else if ( b == '-' )  x--;
    }
    printf("%d\n",x);
    return 0;
}
