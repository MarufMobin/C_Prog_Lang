//Is it possible to get a sum of BB when throwing a die with six faces 1,2,\ldots,61,2,…,6 AA times?
#include<stdio.h>
int main(){

    int A,B;
    scanf("%d %d", &A,&B);
    int rest = 0;
    for( int i = 1; i <= A; i++){
        B-=6;
        rest = B;
    }
    if( rest <= 0 ) {
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
