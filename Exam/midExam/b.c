#include<stdio.h>

int main(){

        int N;
        scanf("%d",&N);
        int array[N];
        int length = sizeof(array)/sizeof(array[0]);
        for( int i = 0; i < N; i++){
            scanf("%d",&array[i]);
        }

    int max[]={0};
    int count = 1;
    for( int i = 0; i < length; i++){
       if( i > N || i == N ) continue;
       else if( i < N ){
            int rest = N - i;
            max[count] = rest;
            count++;
       }
    }
   int maxLeng = sizeof( max) / sizeof( max[0] );
   int result = 0;
    for(int i = 0; i < count; i++ ){
        result+= max[i];
    }
    printf("%d", result);
}
