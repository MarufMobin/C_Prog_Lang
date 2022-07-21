#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);

    for( int i = 1; i <= n; i++){
       for( int j = 1; j <= m ; j++){
            if( i % 2 == 0 ){

                 if( i % 4 == 0 ){
                    printf("#");
                }
                 printf(".");
                for( int j = 2; j <= m-1; j++){
                    printf(".");
               }
                if( i % 4 != 0 ){
                    printf("#");
                }

               break;
            }
           printf("#");
       }

       printf("\n");
    }
}
