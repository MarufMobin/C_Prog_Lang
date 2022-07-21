#include<stdio.h>
#include<string.h>

int main(){

    char s[1001];
    scanf("%s", &s);
    int f, j;

    for( int i = 48; i < 58; i++ ){
        f = 0;
        for( j = 0; j < strlen(s); j++){
            if( s[j] == i ){
                f++;
            }
        }
        printf("%d ", f);
    }
    return 0;
}
