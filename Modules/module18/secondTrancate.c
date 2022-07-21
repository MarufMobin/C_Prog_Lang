#include<stdio.h>
void Trauncate( char s[], int k ){
    int n = strlen(s);

    if( k < 0 || k > n ) return;
    s[k] = '\0';
}
int main(){
    char s[100];
    gets(s);
    int k;
    scanf("%d", &k);
    Trauncate( s, k);
    printf("%s",s);
}
