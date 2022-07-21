#include<stdio.h>

int main(){
    int N,P;
    scanf("%d %d", &N,&P);
    int failers = 0;
    for( int i = 1; i <= N; i++){
        int studentNumber;
        scanf("%d", &studentNumber);
        if( P > studentNumber){
            failers++;
        }
    }
    printf("%d", failers);
    return 0;
}
