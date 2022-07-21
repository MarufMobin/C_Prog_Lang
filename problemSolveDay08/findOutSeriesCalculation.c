#include<stdio.h>

int main(){
    // Count 1 to 100 number serice add
//    int sum = 0;
//    for(int i = 1; i <= 100; i++){
//        sum += i;
//    }
//    printf("Sum: %d", sum);

    // calculate the sum of 1 to 29 and defarent is 2 1+3+5..29

//    int sum = 0;
//
//    for( int i = 1; i <= 29; i+=2){
//        sum += i;
//    }
//    printf("%d", sum);

    //50 + 49 + 48 + 47 + …… ( প্রথম ২০টি পদ)

//    int sum = 0;
//
//    for( int i = 50; i >= 50-19; i--){
//        sum += i;
//    }
//   printf("%d", sum);

//    int sum = 0;
//    for( int i = 50, j = 1; j <= 20; i--, j++){
//        sum += i;
//    }
//    printf("%d",sum);

    //2 + 5 + 8 + 11 + 14 + …..   (প্রথম ১০টি পদ)

//    int sum = 0;
//
//    for( int i = 2, j = 1; j <= 10; i+=3, j++){
//        sum += i;
//    }
//    printf("%d",sum);


    //100 + 97 + 94 + 91 + ….  (0 এর চেয়ে বড় পর্যন্ত)

//    int sum = 0;
//    for( int i = 100; i > 0; i-=3){
//        sum += i;
//    }
//    printf("%d",sum);

    int sum = 0;

    for( int i = 1; i <= 10; i++){
        sum += i*i;
    }
    printf("%d",sum);
}
