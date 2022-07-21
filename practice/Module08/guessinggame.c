#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    srand(time(0));
    int hidden = rand()%100+1;
    //printf("%d\n",hidden);
    int number_of_guesses = 0;
    while(number_of_guesses < 10){
        int guess;
        scanf("%d",&guess);
        if( guess == hidden ){
            printf("Wow, Great, You are Right :) You Won the Game\n");
            break;
        }else if( guess > hidden ){
            printf("Guess Smaller\n");
        }else{
            printf("Guess Larger \n");
        }
        number_of_guesses++;
    }
    if( number_of_guesses == 10 ){
        printf("So Sad :( You are Failed \n");
    }
}
