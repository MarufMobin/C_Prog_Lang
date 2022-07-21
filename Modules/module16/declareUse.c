#include<stdio.h>

void printHello( char name[] ){

    printf("Hello %s\n",name);

}
void printStaticValue(){

    printf("Hello World \n");

}
int main(){

    printHello("Maurf");
    printStaticValue();

}
