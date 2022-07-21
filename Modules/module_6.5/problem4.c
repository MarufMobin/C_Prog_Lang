//Write a C program that will first read an integer n, then read n integers. From those, it will find the sum of even integers.
//#include<stdio.h>
//
//int main(){
//    int n;
//    printf("Enter n: ");
//    scanf("%d",&n);
//    int sum = 0;
//    printf("Input 5 integers: ");
//    for( int i = 1; i <= n; i++){
//        printf("%d", i);
//        if( (i%2) == 0 ){
//            sum += i;
//        }
//    }
//    printf("\nSum of even integers = %d\n",sum);
//}

#include<stdio.h>

int main(){
     int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int sum = 0;
    for( int i = 1; i <= n; i++){
        int a,b,c,d,e;
        scanf("%d", &a);
        if( a % 2 == 0 ){
            sum += a;
        }
    }
    printf("Sum of even integers = %d", sum);
}
