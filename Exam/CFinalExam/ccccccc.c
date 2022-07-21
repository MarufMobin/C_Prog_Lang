#include<stdio.h>

int main(){
    char ch[100];
    scanf("%s", &ch);
    int len = strlen(ch);
    int count = 0;
    int other = 0;
    for( int i = 0; i < len; i++ ){
        if(ch[i] == 'a'){
            count++;
        }else{
            other++;
        }
    }
    if( count < other || count < len || count < len/2 ){
        printf("%d",2*count - 1);
    }else if( len < 2*count - 1 ){
        printf("%d", len);
    }
    return 0;
}
