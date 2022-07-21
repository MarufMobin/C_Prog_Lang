#include<stdio.h>
#include<string.h>

int main(){
    char ch[100];
    scanf("%s", ch);
    int len = strlen(ch);

    int a = 0;
    int x = 0;
    for( int i = 0; i < len; i++ ){
        if( ch[i] == 'a' ){
            a++;
        }else{
            x++;
        }
    }

    if( a > x ){
        printf("%d", len);
    }else{
        printf("%d", a+a/2);
    }
    return 0;
}
