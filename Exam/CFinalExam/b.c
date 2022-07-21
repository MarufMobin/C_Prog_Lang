#include<stdio.h>
#include<string.h>
int main(){

    char s[100];
    scanf("%s", s);

    int len = strlen(s);

    int count = 0;
    int res = 0;

    for( int i =0; i < len; i++ ){
       if( s[i] == 'a' ){
            count++;
       }else{
            res++;
       }
    }
    int ans = 1;
    if( res > count && len / 2 ){
        ans = 2*count - 1;
    }else{
        printf("%d\n", len);
        return 0;
    }
    printf("%d\n", ans);
    return 0;
}
