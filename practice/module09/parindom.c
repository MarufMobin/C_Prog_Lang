#include<stdio.h>

int main(){
    // Reverse Number Procedural
//    int n,reverse = 0, remainder;
//    scanf("%d", &n);
//    while( n != 0 ){
//        remainder = n%10;
//        reverse = reverse * 10 + remainder;
//        n /= 10;
//    }
//    printf("reverse Number = %d", reverse);
//    return 0;


    // Parindom Number find out
    int A,B,C;
    scanf("%d %d %d", &A,&B,&C);
    if( A == C ){
        printf("%d%d%d is a palindrome number.", A,B,C);
    }else{
            printf("THis is Not Prindom Number");
    }
}
