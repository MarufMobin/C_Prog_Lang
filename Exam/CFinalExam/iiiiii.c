#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int res = pow( (int)5 , (int)n );

    printf("%d \n", res);
    int count = 0;
    do{
        res/=10;
        ++count;
    }while( res != 10 );
    printf("%d Count", count);
    return 0;
}
