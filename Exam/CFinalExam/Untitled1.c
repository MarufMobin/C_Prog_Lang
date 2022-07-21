#include<stdio.h>
void change_values( int ar[], int L, int R ){
    for( int i = L; i <= R; i++ ){
        ar[i] = 0;
    }
}
int main(){
    int ar[]={10,20,30,40,50};
    int N=5, L=1, R=3;
    change_values( ar, L, R );
    for( int i = 0; i < N; i++ ){
        printf("%d ", ar[i]);
    }
    return 0;
}
