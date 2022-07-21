//#include<stdio.h>
//void make_sum( void ){
//    int a,b;
//    scanf("%d %d", &a, &b);
//    int sum = a + b;
//    printf("%d", sum );
//}
//int main(){
//    make_sum();
//    return 0;
//}


///Write a Code which is use of Multiple Test case using perpuss
//
//#include<stdio.h>
//void take_array(){
//    int n;
//    scanf("%d", &n);
//    int a[n];
//    for( int i = 0; i < n; i++ ){
//        scanf("%d", &a[i]);
//    }
//    for( int i = 0; i < n; i++ ){
//        printf("%d \n", a[i]);
//    }
//}
//int main(){
//
//    int test;
//    scanf("%d", &test);
//    for( int i = 0; i < test; i++ ){
//        take_array();
//    }
//
//}
///Using While for Test Case run and which is true unless we find 0
#include<stdio.h>
void take_array(){
    int n;
    scanf("%d", &n);
    int a[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }
    for( int i = 0; i < n; i++ ){
        printf("%d \n", a[i]);
    }
}
int main(){

    int test;
    scanf("%d", &test);
    while( test-- ){
        take_array();
    }

}
