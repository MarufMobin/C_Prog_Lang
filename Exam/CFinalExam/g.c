#include<stdio.h>

int main(){

    int l, r;
    scanf("%d %d", &l,&r);

    char s[100];
    scanf("%s", &s);

    for( int i = l-1; i < r; i++){
        r--;
        char temp  = s[i];
        s[i] = s[r];
        s[r] = temp;
    }
    printf("%s\n",s);
    return 0;
}

