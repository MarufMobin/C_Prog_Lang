#include<stdio.h>

int main() {

    int N;
    scanf("%d",&N);
    int first=1;
    while( N >= 0 ){
       first *= N % 10;
       N /=10;
    }
    printf("%d",first);

}
