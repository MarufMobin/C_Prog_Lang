//#include<stdio.h>
//
//int main(){
//
//    char str[] = "Hello World";
//    char str2[100];
//    int len = sizeof( str )/ sizeof( str[0] );
//
//    for( int i = 0; i < len; i++ ){
//        str2[i] = str[i];
//    }
//    str2[len] = '\0';
//    printf("%s", str2);
//}


// With out Length how to copy and past code

#include<stdio.h>
#include<string.h>
int main(){

    char str[] = "Hello World";
    char str2[ 100 ];
    //strcpy(str2, str);
    strncpy( str2, str, 7);
    str2[7] = '\0';
    printf("%s", str2);
//    int i = 0;
//    while( str[i] != '\0' ){
//        str2[i] = str[i];
//        i++;
//    }
//    str2[i] = '\0';
//    printf("%s", str2);

    return 0;
}
