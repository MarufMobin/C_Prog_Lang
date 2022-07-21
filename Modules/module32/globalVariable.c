#include<stdio.h>
void paint( int var );
int main(){

    int x = 100;
    paint(x);
    return 0;

}

void paint( int var ){
    printf("%d", var);
}
