#include<stdio.h>

void array_delete( int ar[], int n, int pos ){
    for( int i = pos+1; i < n; i++ ){
        ar[i-1] = ar[i];
    }
}

int main(){

    int ar[7]={ 5, 10, 2, 3, 14, 20 };
    int pos;
    scanf("%d",&pos);
    array_delete(ar,6,pos);
    for( int i = 0; i < 5; i++ ){
        printf("%d ", ar[i]);
    }
    return 0;

}
