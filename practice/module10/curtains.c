#include<stdio.h>

int main(){

    int A,B;
    scanf("%d %d",&A,&B);
    int total = B*2;
    int rest = 0;
    if( A > total){
        rest += A - total;
    }
    printf("%d", rest);
    return 0;
}
