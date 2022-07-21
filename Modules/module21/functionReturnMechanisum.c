//#include<stdio.h>
//
//int sumOfDigit( int x ){
//    int sum = 0;
//
//    while( x ){
//        int d = x % 10;
//        x/=10;
//        sum+=d;
//    }
//    return sum;
//}
//int main(){
//
//    printf("%d", sumOfDigit(1234));
//
//}


/*  Return by Value Mechanisum Use kre akta
function thake akadik value pete pari*/
//
//#include<stdio.h>
//
//int divide( int x , int y, int *vagfol, int *vagshesh ){
//    *vagfol = x/y;
//    *vagshesh = x%y;
//}
//
//int main(){
//    int vagfol, vagshesh;
//    divide( 7, 3, &vagfol, &vagshesh );
//    printf("%d %d", vagfol,vagshesh);
//}

/*


*/
#include<stdio.h>
int * makeNumSquares( int n){
    int *squares = (int *)malloc( n*sizeof(int));
    for( int i = 0; i < n; i++ ){
        squares[i] = i*i;
    }
    return squares;
}
int main(){
    int n;
    scanf("%d",&n);

    int *sq;

    sq = makeNumSquares( n );

    for( int i = 0; i < n; i++ ){
        printf("%d ", sq[i]);
    }
}
