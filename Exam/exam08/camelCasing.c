#include<stdio.h>
#include<string.h>

int main(){

    char ch[100];
    gets(ch);
    for( int i = 0; i < strlen(ch); i++ ){
        int value = ch[0] - 'a';
        printf("%d ", value+'A');
//        printf("%c ", ch[i]);
    }

}
