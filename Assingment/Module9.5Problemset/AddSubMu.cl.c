#include<stdio.h>

int main(){
    int A , B;
    scanf("%d %d", &A , &B);
    int add = A + B;
    int sub = A - B;
    int mul = A * B;

    if ( (add > sub) && (add > mul) ){
        printf("%d", add);
    }else if( sub > mul ){
        printf("%d", sub );
    }else {
        printf("%d", mul);
    }

}
