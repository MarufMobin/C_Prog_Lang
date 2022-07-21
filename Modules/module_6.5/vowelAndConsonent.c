#include<stdio.h>

int main(){
    char ch;
    scanf("%ch", &ch);
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
        printf("%c is Vowel ", ch);
    }else{
        printf("%c is Consonent", ch);
    }

}
