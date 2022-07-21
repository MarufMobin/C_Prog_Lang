//How do you declare a function that takes as input an integer and a double and returns a char?

#include<stdio.h>

char retnChar( int n , double num ){
    int caracter = n + num;
    return caracter;
}

int main(){

    int n;
    printf("Give me a integer Number : ");
    scanf("%d", &n);
    double num;
    printf("Give me a Double Number : ");
    scanf("%lf", &num);
    char ch = retnChar( n , num );
    printf("%c", ch);

    return 0;

}
