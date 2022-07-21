//swipeValue

#include<stdio.h>
void swap( int *x , int *y ){
    int temp = *y;
    *y = *x;
    *x=temp;
}
int main(){

    int x = 10, y = 20;
    swap( &x,&y );
    printf("%d %d",x,y);
//    int tmp = y;
//    y = x;
//    x = tmp;
//
//    printf("x = %d, y = %d",x,y);
}
