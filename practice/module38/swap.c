///Write a function named swap() which will take two pointers which indicate two integer variables.
/// After that swap the values of those pointers and print them in the main() function.


#include<stdio.h>

void swap( int *a, int *b ){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a = 20, b = 50;
    swap( &a, &b );
    printf("a Value are here => %d, b => Value are here %d", a, b);

}
