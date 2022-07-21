#include<stdio.h>

int main(){

    int t;
    scanf("%d", &t);

    for( int i = 0; i < t; i++ ){
        int n;
        scanf("%d", &n);
        char str[n];
        for( int i = 0; i < n; i++ ){
            scanf("%c", &str[i]);
        }
        int i = 0;
        int result = 0;
        while( str[i] != 8 ){
            i++;

            if( i > 0 ){
            result = n - i;
            }
            if( result >= 11 ){
                printf("YES\n");
                break;

            }else{
                printf("NO\n");
                 break;
            }

        }


    }

}
