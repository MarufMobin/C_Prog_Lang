//2) Given a number, write a program using while loop to reverse the digits of the number.
//
//
//Output:--
//
//Enter any Number:--
//
//12345
//
//Reverse of Number 12345 is 543

#include<stdio.h>

int main(){

    int num;
    scanf("%d",&num);
    int result = 1;
    while( num / 10 == 0 ){
       printf("%d",num);
       //result*=10 + num;
    }
 printf("%d",result);
}
