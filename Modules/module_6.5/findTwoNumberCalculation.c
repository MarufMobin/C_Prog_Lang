#include<stdio.h>

int main(){
    int A , B;
    scanf("%d %d", &A, &B);
    int result = A + B;
    if( result >= 10 ){
        printf("error");
    }else{
        printf("%d",result);
    }
    return 0;
}
