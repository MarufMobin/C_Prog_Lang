#include<stdio.h>

int main(){
    int year;
    scanf("%d",&year);
    int century = 0;
    if( year % 10  != 0 ){
        printf("%d",year % 100);
    }else{
        printf("%d",year / 100);
    }
    return 0;
}
