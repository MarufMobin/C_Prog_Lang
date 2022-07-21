//Write a function that takes as input a number and outputs its square.

#include<stdio.h>

int squreNumber( int n  ){
    return n*n;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("This is the Number %d",squreNumber(n));

}
