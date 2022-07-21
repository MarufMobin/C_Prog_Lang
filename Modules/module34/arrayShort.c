#include<stdio.h>

void inserting( int ar[], int size, int pos,int val ){

    for( int i = size-2; i >= pos; i-- ){
        ar[i+1] = ar[i];
    }
    ar[pos] = val;

}

int main(){
    printf("Enter a Array Size : ");
    int n;
    scanf("%d", &n);
    printf("Enter %d th Value for array : ",n);
    int ar[n + 1];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &ar[i]);
    }
    int size = sizeof( ar )/ sizeof( ar[0] );
    int pos, val;
    scanf("%d %d", &pos , &val);
    inserting( ar, size, pos, val );

    for( int i = 0; i < size; i++ ){
        printf("%d ", ar[i]);
    }
    return 0;
}
