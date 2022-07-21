//#include<stdio.h>
//
//int sq( int x ){
//
//    return x*x;
//
//}
//int main(){
//
//    printf("%d %d \n", 2, sq(2));
//
//}

/* Pass By Value Mechanisms */

//#include<stdio.h>
//
//int addOne( int x ){
//
//    x += 1;
//    return x;
//
//}
//int main(){
//
//    int x = 5;
//    int y = addOne(x);
//    printf("%d %d",x, y);
//
//}
/* Pass By Address Mechanisms */

//#include<stdio.h>
//#include<stdbool.h>
//
//void makePositive( double *x ){
//    if( *x < 0 ) *x = -*x;
//}
//int main(){
//
//    while( true ){
//        double x;
//        scanf("%lf", &x);
//        if( x == 0 ) break;
//        makePositive(&x);
//        printf("%lf\n", x );
//    }
//
//}

/* Array Reverce */

#include<stdio.h>

int gcd( int x, int y ){
    while( y != 0 ){
        int temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

int findGcd( int sz , int arr[] ){
    int ans = arr[0];
    for( int i = 1; i < sz; i++ ){
        ans = gcd( ans , arr[i] );
    }
    return ans;
}
void makeDouble( int sz, int arr[] ){
    for( int i = 0; i < sz; i++ ){
        arr[i]*=2;
    }
}
int main(){
    int arr[] = { 4, 8, 12 };
    printf("%d \n", findGcd(3, arr));
    makeDouble( 3, arr);
    for( int i = 0; i < 3; i++ ){
        printf("%d ", arr[i]);
    }
}

