//1) Write an interactive program that could read a positive integer number and decide

//whether the number is a prime number and display the output accordingly.

//Modify the program to count all the prime numbers that lie between 100 and 200


#include<stdio.h>

int main(){
    int i , number = 100, count , maximum = 200;

    while( number <= maximum ){
        count = 0;
        i = 2;
        while( i <= number / 2 ){
            if( number % i == 0 ){
                count++;
                break;
            }
            i++;
        }
        if( count == 0 && number != 1 ){
            printf("%d \n", number );
        }
        number++;
    }
    return 0;
}
