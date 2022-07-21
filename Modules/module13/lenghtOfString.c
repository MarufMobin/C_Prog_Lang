#include<stdio.h>
#include<string.h>

int main(){

    char str[100] = "Hello World";

    int sz = sizeof( str )/ sizeof( str[0] );


    printf("%d\n", sz);
       int len = strlen(str);
    printf("Length = %d\n", len);


//    int lng = 0;
//    while( st[lng] != '\0'){
//        lng++;
//    }
//    printf("Length = %d\n",lng);

}
