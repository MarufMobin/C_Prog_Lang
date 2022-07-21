#include<stdio.h>

int main(){

    int N;
    scanf("%d",&N);
    if( N == 1 ){
        printf("I hate it\n");
    }else if( N == 2 ){
        printf("I hate that I love it\n");
    }else{
        printf("I hate that I love that I hate it\n");
    }
    return 0;
}
