#include<stdio.h>
#include<string.h>

int main(){
    char ch[100];
    gets(ch);

    int i = 0;
    char newArr[strlen(ch)+1];
    while( strlen(ch) > i ){
        if( ch[0] ){
            newArr[0] = toupper(ch[0]);
        }
        newArr[i] = tolower(ch[i]);
        i++;
    }
     printf("%s", newArr);
}

