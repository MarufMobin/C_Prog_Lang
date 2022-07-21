///Make a function named make_sum() which will take two floating values as parameters and return their sum

#include<stdio.h>
float make_sum( float *a, float *b){
    return *a + *b;
}
int main(){
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    float sum = make_sum(&a, &b);
    printf("%f", sum);
    return 0;
}
