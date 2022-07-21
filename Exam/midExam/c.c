#include<stdio.h>
#include<string.h>
int main(){

    int N;
    scanf("%d",&N);
    char array[N+1];
    for( int i = 0; i <= N; i++){
//        scanf("%c",&array[i]);
        scanf("%c",&array[i]);
    }
    for( int i = 0; i < strlen(array); i++){
        printf("%c",array[i]);
    }
}
