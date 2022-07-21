//#include<stdio.h>
//#include<string.h>
//
//int main(){
//
//    char a[] = "Hello";
//    char b[] = "World";
//
//    int lena = strlen(a);
//    int lenb = strlen(b);
//    int lenc = lena + lenb;
//
//    char c[lenc+1];
//
//    for( int i = 0; i < lena; i++){
//        c[i] = a[i];
//    }
//
//    for( int i = 0; i < lenb; i++ ){
//        c[lena+i] = b[i];
//    }
//    c[ lena + lenb ] = '\0';
//    printf("%s",c);
//}

// write a program which is concat two word

//#include<stdio.h>
//#include<string.h>
//
//int main(){
//
//    char a[100] = "Hello";
//    char b[100] = "World";
//
//    int lena = strlen(a);
//    int lenb = strlen(b);
//
//    for( int i = 0; i < lenb; i++ ){
//        a[lena+i] = b[i];
//    }
//    a[lena+lenb] = '\0';
//    printf("%s", a);
//}


// Using Function for concatenation two word

#include<stdio.h>
#include<string.h>

int main(){
    char a[10] = "Hello";
    char b[100] = "World";

//    strcat(a,b);
    strncat(a, b, 15);
    a[14] = '\0';
    printf("%s",a);
}
