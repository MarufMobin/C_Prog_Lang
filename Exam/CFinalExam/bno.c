#include<stdio.h>
#include<string.h>

int main(){
    char s[51];
    scanf("%s",&s);
    int len = strlen(s);

    int a = 0;
    int other = 0;

    for( int i = 0; i < len; i++ ){
        if( s[i] == 'a' ){
            a++;
        }else{
            other++;
        }
    }
    if( a < other || a < other/2 ){
        printf("%d",( 2*a )-1);
    }else if( 2*a-1 > len ){
        printf("%d",len);
    }else{
        printf("%d",( 2*a )-1);
    }
    return 0;
}
