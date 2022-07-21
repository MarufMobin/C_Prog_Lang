#include<stdio.h>
#include<limits.h>

int main(){

    int N;
    scanf("%d",&N);
    if( INT_MAX > N ){
        printf("Yes");
    }else if( INT_MIN > N  ){
        printf("Yes");
    }else{
        printf("No");
    }
//    printf("%d",INT_MAX);
//    printf("%d",INT_MIN);

}
