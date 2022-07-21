#include<stdio.h>

void makeDouble( int* a ){
     *a *= 2;
}

int main(){
    int x = 10;
    makeDouble(&x);
    printf("%d", x);

}
