#include<stdio.h>

int main(){
    //int num;
//    printf("please give a Number : ");
//    scanf("%d", &num);
//    if( num > 0 ){
//        printf("%d, Number is positive \n", num);
//    }else if( num == 0 ){
//        printf("%d is Zero \n", num);
//    }else{
//        printf("%d, Number is Nagetive \n", num);
//    }
    // anoter way to find it
    int num;
    printf("give me a Number : ");
    scanf("%d",&num);
    if( num > 0 ){
        printf("positive");
    }else{
        if( num == 0){
            printf("Zero");
        }else{
            printf("Negative");
        }
    }
    return 0;
}
