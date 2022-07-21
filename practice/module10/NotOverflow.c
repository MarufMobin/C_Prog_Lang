#include<stdio.h>
#include<limits.h>

int main(){

    int N;
    scanf("%d",&N);

    if( N > INT_MAX || N < INT_MIN  ){
        printf("Yes");
    }else{
        printf("No");
    }

}
