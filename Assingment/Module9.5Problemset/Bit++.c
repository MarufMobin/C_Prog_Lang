#include<stdio.h>

int main() {

    int x;
    scanf("%d", &x);
    int res = 0;
    for( int i = 1; i <= x; i++ ){
        char ch,op1,op2;
        scanf("%c %c %c",&ch,&op1,&op2);
        if( op1 == '+' || op2 == '+' ){
            res++;
        }else if( op1 == '-' || op2 == '-'){
            res--;
        }
    }
    printf("%d",res);
    return 0;
}
