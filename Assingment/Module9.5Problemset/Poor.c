#include<stdio.h>

int main(){
    int A , B , C;

    scanf("%d %d %d", &A , &B , &C );

    if( ( A == B ) && (A > C || A < C) ){
        printf("Yes");
    }else if(( B == C ) && (A > C || A < C) ){
        printf("Yes");
    }else if(( A == C ) && (A > B || A < B) ){
        printf("Yes");
    }else {
        printf("No");
    }

}
