//#include<stdio.h>
//#include<string.h>
//
//int main(){
////    char str[] = "Hello";
////    char * pos = strchr( str, 'i' );
////
////    if( !pos ){
////        printf("Not Founded ");
////    }else{
////        printf("Founded at %d", pos-str );
////    }
//
//    char text[100], pattern[100];
//    gets(text);
//    gets(pattern);
//
//    char *pos = strstr( text, pattern );
//
//    if( !pos ){
//        printf("Not Found");
//    }else{
//        printf("Found at %d", pos-text);
//    }
//}

#include<stdio.h>
#include<string.h>
int main(){

    char text[100];
    gets(text);
    char pattern;
    scanf(" %c", &pattern);

    char *cur = text;

    while( cur ){
        char *pos = strchr( cur, pattern );
        if( pos == NULL ) break;
        printf("Found at %d\n", pos - text );
        cur = pos + 1;
    }
}
