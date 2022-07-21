#include<stdio.h>

int main(){
    int timesTableNumber , i;
    printf("Pleas give me a Number and Convert the Times Table : ");
    scanf("%d", &timesTableNumber);

    for( i = 1; i <= 10; i++ ){
        printf("%d X %d = %d\n" ,timesTableNumber , i , timesTableNumber*i );
    }
    getch();
    return 0;
}
