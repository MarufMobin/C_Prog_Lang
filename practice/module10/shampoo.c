#include<stdio.h>

int main(){

    int V , A , B ,C;
    scanf("%d %d %d %d", &V, &A,&B,&C);

    while( V >= 0 ){
        if( V > A ){
            V -= A;
        }else{
            printf("T");
        }
        if( V >= B ){
            V-= B;
        } else{
            printf("F");
        }
        if( V >= C ){
            V-= C;
        } else{
            printf("F");
        }
    }
    return 0;
}
