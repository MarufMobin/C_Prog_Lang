#include<stdio.h>

int main(){

//    int values[10];
//
//    for( int i = 0; i < 10; i++ ){
//        values[i] = i+1;
//    }
//    for( int i = 0; i < 10; i++){
//        printf("%d \n", values[i]);
//    }
    //Second Way of initialization
    int values[] = { 1, 2, 3, 4, 5 };

    printf("%d %d %d %d \n", sizeof(int), sizeof(double), sizeof(float),sizeof(long long ));

    int sz = sizeof(values)/sizeof(values[0]);

    for( int i = 0; i < sz; i++ ){
        printf("%d \n", values[i] );
    }

}



/*

// int a; -> variable
//int a[]; -> array
double reals[20];

*/
