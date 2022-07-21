#include<stdio.h>

int main(){

//    int x;
//    while( 1 ){
//        scanf("%d", &x);
//        if( x % 2 == 0 ) break;
//    }
//    printf("Your input : %d", x);
        int x;
        scanf("%d",&x);
        do{
            scanf("%d",&x);
        }while( x % 2 != 0 );
        printf("Your Input : %d", x );
        getch();
        return 0;
}
