/////String Palindrome using Two Pointers Technique
//
//#include<stdio.h>
//#include<string.h>
//
//int main(){
//
//    char a[100];
//    scanf("%s",&a);
//    int i = 0, j = strlen(a)-1;
//    for( int i = 0; i < j; i++, j-- ){
//        if( a[i] != a[j] ){
//            printf("NO, This is Not a palindrome String");
//            return 0;
//        }
//    }
//
//    printf("Yes , This is a Palindrome String");
//
//    return 0;
//}
//


#include<stdio.h>
#include<string.h>

int main(){

    char a[100];
    scanf("%s",&a);
    int i = 0, j = strlen(a)-1;
    int c = 0;
    while( i < j ){
        if( a[i] != a[j] ){
            printf("This is Not a Palindrome Number");
            c = 1;
            break;
        }
        i++;
        j--;
    }
    if( c == 0 ){
        printf("This is a Palindrome Number");
    }

    return 0;

}
