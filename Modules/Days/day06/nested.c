#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if( b != 0 ){
            printf("Remainder is %d \n", a%b);
            if( a%b ==0 ){
                printf("%d is Divided by %d \n", a, b);
            }else{
                printf("%d is not Divided by %d \n", a,b);
            }
    }else{
        printf("you Cannot Divided by 0 \n");
    }
}
