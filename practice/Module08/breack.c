#include<stdio.h>
#include<stdbool.h>

int main(){
    while(true){
        int input;
        scanf("%d",&input);
        if( input == 0 ){
            printf("Invalide Input \n");
            break;
        }
        printf("%d \n",input);
    }

}
