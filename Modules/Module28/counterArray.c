#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &ar[i]);
    }
    int count[11]={0}; //Qus then why use memset()

    for( int i = 0; i < n; i++ ){
        int val = ar[i];
        count[val]++;
    }
    for( int val = 0; val <= 10; val++ ){
       if( count[val] > 0 ){
            printf("Value -> %d, Count -> %d\n", val ,count[val]);
       }
    }
    return 0;
}
