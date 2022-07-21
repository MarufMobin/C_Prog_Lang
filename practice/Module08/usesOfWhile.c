#include<stdio.h>

int main(){
//    int x;
//    scanf("%d",&x);
//    int sum = 0;
//    while( x > 0){
//        int digit = x % 10;
//        x/=10;
//        sum += digit;
//       // printf("digit = %d, x = %d \n", digit, x);
//    }
//    printf("%d",sum);


        int y;
        scanf("%d",&y);
        int reverseNumber = 0;
        while( y > 0 ){
            int n_digit = y % 10;
            y/=10;
           reverseNumber =  reverseNumber * 10 + n_digit;
        }
        printf("%d", reverseNumber);

}
