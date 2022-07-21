#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int tempCal = 0;
    for( int i = 1; i <= n; i++){
        int tempNum;
        scanf("%d", &tempNum);
        if( tempNum < 0 ){
            tempCal+=1;
        }
    }
    printf("%d",tempCal);
    return 0;

}
