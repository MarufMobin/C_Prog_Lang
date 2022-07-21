//void makeSum(int a, int b, int *sum)
//The above function takes as input two integers a and b and stores their sum in the variable sum. Implement the function.

#include<stdio.h>
void makeSum(int a, int b, int *sum){
    *sum = a + b;
}
int main(){

    int a,b,sum;
    scanf("%d %d", &a , &b);
    makeSum( a, b, &sum );
    printf("%d", sum);

    return 0;
}
