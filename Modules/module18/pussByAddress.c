#include<stdio.h>

void makePositive( int *pa ){
    if( *pa < 0 ){
        *pa = -*pa;
    }
}
int main(){

    int a = -10;
//    printf("Give me a Nagetive Number: ");
//    scanf("%a", &a);
    makePositive(&a);
    printf("%d",a);

}
