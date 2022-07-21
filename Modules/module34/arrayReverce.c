#include<stdio.h>

//Find length of array

//int arrsize( int ar[] ){
//    int index = 0;
//    while( ar[index] != '\0' ){
//        index++;
//    }
//    return index;
//}
void reverce( int ar[], int n ){

    int i = 0, j = n - 1;
    while( i < j ){
        int tmp = ar[i];
        ar[i] = ar[j];
        ar[j] = tmp;
        i++;
        j--;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for( int i =0; i < n; i++ ){
        scanf("%d", &ar[i]);
    }

    int size = sizeof( ar ) / sizeof( ar[0] );
    reverce( ar, size );

    for( int i = 0; i < 5; i++){
        printf("%d ",ar[i]);
    }

    return 0;
}
