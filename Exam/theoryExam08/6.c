///Make a pointer variable P which points to an integer variable. Make another pointer variable Q which points to the pointer P. Now make another pointer variable R which points to the pointer Q. Now change the value of that integer variable by accessing pointer R

#include<stdio.h>

int main(){
    int var = 20;
    int *P = &var;
    int **Q = &P;
    int ***R = &Q;
    ***R = 30;

    printf("%p %d => P %p %d => Q %p %d => R ", P,*P, Q,**Q, R,***R);
    return 0;
}
