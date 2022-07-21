#include<stdio.h>
#include<ctype.h>

int main(){
//    char ch;
//    scanf("%c", &ch);
//
//    if( 'A' <= ch && ch <= 'Z' ){
//
//        int pos = ch - 'A';
//        printf("%d \n",pos);
//        char lowerCase = pos + 'a';
//        printf("%c \n",lowerCase);
//        printf("%d \n",lowerCase);
//
//    }

// Using Method Find out Upper and lower case

    char ch;
    scanf("%c",&ch);

    if( isupper(ch)){
        printf("Lower = %c",tolower(ch));
    }else{
        printf("Others");
    }

}

