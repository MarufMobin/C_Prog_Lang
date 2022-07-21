#include<stdio.h>

int main(){
    int marks;
    printf("Give me your Marks : ");
    scanf("%d", &marks);
    if( marks >= 40){
        printf("Brave You have Passed :) \n");
    }else{
        printf("You have Failed ): ");
    }
    getch();
    return 0;
}
