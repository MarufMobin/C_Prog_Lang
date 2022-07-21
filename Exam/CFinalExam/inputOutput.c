//Take integer value as input and output that value until you get 42. Input will be less than 100
#include<stdio.h>

int main(){
    while(1){
        int n;
        scanf("%d", &n);
        if( n != 42 && n < 100 ){
            printf("%d\n", n);
        }else{
            return 0;
        }
    }
    return 0;
}
