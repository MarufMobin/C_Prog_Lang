#include<stdio.h>
#include<string.h>

int main(){
    char n[100];
    gets(n);
    if( strlen(n) > 8 ){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
