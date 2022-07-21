#include <stdio.h>

int findGCD( int n1, int n2 ){
//    while( n1 != n2 ){
//        if( n1 > n2 ){
//            n1 -= n2;
//        }else n2 -= n1;
//   }
//   return n1;
}

int main()
{
   int n;
   scanf("%d",&n);

    //define a array
    int array[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", array[i]);
    }
    int ans = 0;
    for( int i = 0; i < n; i++ ){
       // ans += findGCD( array[i], array[i+1]);
       //findGCD( array[i], array[i+1]);
       printf("%d",array[i]);
    }

   printf("GCD = %d", ans );
//    int n;
//    scanf("%d",&n);
//
//    int arr[n];
//
//    for( int i = 0; i < n; i++ ){
//        scanf("%d",&arr[i]);
//    }
//
//    for( int i = 0; i < n; i++ ){
//        printf("This is the %d nth array index \n", arr[i]);
//    }


    return 0;
}
