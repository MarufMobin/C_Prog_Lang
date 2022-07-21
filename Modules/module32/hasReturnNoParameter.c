#include<stdio.h>

int make_sum(){
    int a,b;
    scanf("%d %d", &a,&b);
    int sum = a + b;
    return sum;
}

int main(){
    int sum = make_sum();
    printf("%d", sum);
    return 0;
}
