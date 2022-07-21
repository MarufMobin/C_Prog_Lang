#include<stdio.h>
#include<string.h>
int main(){

    char s[101];
    scanf("%s",&s);
    int count[10]={0};

    int i = 0;
    while( i<strlen(s) ){
        if( s[i] != '+' ){
            count[ s[i]-48 ]++;
        }
        i++;
    }

    int index = 0;
    for( int i = 0; i < 10; i++ ){
         index += count[i];
    }

    for( int i = 0; i < 11; i++ ){
        if( count[i] != 0 ){
            for( int j = 0; j < count[i]; j++ ){
                printf("%d",i);
                if( count[i] >= 1 && index-1 ){
                    printf("+");
                    index--;
                }
            }
        }
    }
    return 0;
}
