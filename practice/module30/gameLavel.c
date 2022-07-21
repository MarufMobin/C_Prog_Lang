#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf("%d",&n);
    int x;
    scanf("%d", &x);
    int first[100];
    for( int i = 0; i<x; i++ ){
        scanf("%d", first[i]);
    }
    int y;
    scanf("%d",&y);
    int second[100];
    for( int i = 0; i < y; i++ ){
        scanf("%d", second[i]);
    }
    for( int i =0; i < strlen(first); i++ ){
        if( first[i] == n ){
            printf("I become the guy.");
            return 0;
        }
    }
    for( int i = 0; i < strlen(second); i++ ){
        if( second[i] == n ){
           printf("I become the guy.");
            return 0;
        }
    }
    printf("Oh, my keyboard!");
    return 0;
}
