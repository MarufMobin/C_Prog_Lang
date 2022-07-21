//#include<stdio.h>
//
//void check_carecter( char input[] ){
//
//    int i = 0;
//    int count = 0;
//    while( input[i] != '\0' ){
//        if( input[i] == 'o' ){
//            printf("YES Got it! \n");
//            count++;
//        }
//        i++;
//    }
//    if( count == 0 ){
//        printf("NO it's not here\n");
//    }
//}
//
//int main(){
//    char a[] = "hellobae", b[] = "Wrld";
//    check_carecter(a);
//    check_carecter(b);
//    return 0;
//}

#include<stdio.h>
#include<string.h>

void check_char( char input[], char ch ){
    for( int i = 0; i < strlen(input); i++ ){
        char val = input[i];
        if( val == ch ){
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
}

int main(){
    char a[] = "helloboe", b[] = "World";
    char c = 'e';
    check_char(a,c);
    return 0;
}
