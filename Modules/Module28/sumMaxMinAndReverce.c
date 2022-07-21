//#include<stdio.h>
//int main(){
//    int ar[6] = { 2, 1, 0, -5, 10, 5 };
//    int sum  = 0;
//    for( int i = 0; i < 6; i++ ){
//        int val = ar[i];
//        sum += val;
//    }
//    printf("%d", sum);
//    return 0;
//}


//Find Maximum Vlaue
//#include<stdio.h>
//int main(){
//    int ar[6] = { 2, 1, 0, -5, 10, 5 };
//    int max = ar[0], min = ar[0];
//    for( int i = 1; i < 6; i++ ){
//        int val = ar[i];
//        if( val > max ){
//            max = val;
//        }
//        if( val < min ){
//            min = val;
//        }
//    }
//    printf("min -> %d , max -> %d ", min , max );
//    return 0;
//}

// Array Reverse

#include<stdio.h>
int main(){
    int ar[6] = { 2, 1, 0, -5, 10, 5 };

    for( int i = 5; i >= 0; i--){
        printf("%d ", ar[i]);
    }

    return 0;
}
