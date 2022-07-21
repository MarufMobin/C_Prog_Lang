//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//
//int main(){
//
//    char a[100] , b[101];
//    printf("Enter your Value : ");
//    gets(a);
//    int count = 0;
//    while( a[count] != '\0' ){
//        count++;
//    }
//    for( int i = 0; i < count; i++ ){
//        b[i] = a[i];
//    }
//    bool isPallindom = true;
//    for( int i = 0; i < count; i++ ){
//        if( a[i] != b[i] ){
//            isPallindom = false;
//        }
//    }
//    if( isPallindom ){
//        printf("%s This is palindom String ", a );
//    }else{
//        printf("%s This is Not palindom String ", a );
//    }
//    return 0;
//}

///Another way to find palindrome
#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];
    scanf("%d", &a);
    strcpy(b,a);
    strrev(b);

    for( int i = 0; i < strlen(a); i++ ){
        if( a[i] != b[i] ){
            printf("This Value are not palindrome ");

            return 0;
        }
    }
    printf("This String are palindrome ");

    return 0;

}
