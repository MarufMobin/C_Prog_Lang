#include<stdio.h>

int main(){


//    const int a = 10;
//    int *p = &a;
//    *p = 20;
//    printf("%d", a);
//    return 0;

    const int a = 10;
    const int *const p = &a;
    *p = 20;
    printf("%d", p);

    return 0;

}
