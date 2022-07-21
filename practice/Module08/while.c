#include<stdio.h>
#include<stdbool.h>

int main(){

//    for( int i = 1; i <= 5; i++){
//        printf("%d\n",i);
//    }
//    int j = 1;
//    while( j <= 5 ){
//        printf("j %d\n", j);
//        j++;
//    }
    int money = 0;
    int target = 100;
    bool mess = false;
    while( money < target ){
        printf("given Money . Enter Your Amount : ");
        int given;
        scanf("%d", &given);
        int currentAmount;
        money +=given;
        printf("Current Money = %d \n",money);
        mess = true;
    }
    if(mess){
        printf("Yes You Full fill your Target");
    }
}


/*
    While( Condition ) {
        Statement
    }
 */
