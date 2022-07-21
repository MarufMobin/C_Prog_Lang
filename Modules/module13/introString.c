#include<stdio.h>

int main(){

    char st[] = "This is a String.";
    int lng = sizeof(st)/sizeof(st[0]);
    printf("%d\n",lng);
    for( int i = 0; i < lng; i++){
        printf("%d -> %c (ASCII = %d)\n", i, st[i], st[i]);
    }
}
