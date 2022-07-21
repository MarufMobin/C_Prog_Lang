#include<stdio.h>

int main(){

    int a[5] = {10, 20, 30, 40,50 };
//    int *p = &a;
//
//   printf("%d %d %d", *a, *(a+1), *(a+2) );
//
    int *ptr = a;

//    for( int i = 0; i < 5; i++ ){
//        printf("%d ", *(ptr) );
//        ptr++;
//    }

    for( int i = 0; i < 5; i++ ){
        printf("%d ",*(a+i));
    }

}
