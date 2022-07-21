///Write a function named ultra_sum() which will take two integers as parameters and do two things.
///First one is to make the sum of these two values, and another one is to multiply these two values.
/// You can’t use the return keyword to return them to the main() function, and also you can’t print them in the ultra_sum()
///function. Somehow you need to give back those sum and multiplied values to the main()
///function and print them in the main() function.


#include<stdio.h>

void ultra_sum( int *a, int *b, int *sum, int *multiple ){
    *sum = *a + *b;
    *multiple = *a * *b;
}

int main(){

    int a = 2, b = 3;
    int sum , multiple;
    ultra_sum( &a, &b, &sum, &multiple );
    printf("%d %d", sum , multiple);
}
