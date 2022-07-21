#include<stdio.h>
#include<string.h>

int main(){

    int N;
    scanf("%d", &N);

    char ch[300];
    while( N ){
      gets(ch);
      N--;
    }

    for(int i = 0; i < N; i++ ){
//        if( i % 2 != 0 && ch[i] == ch[i+2] ){
        if( ch[i] == ch[i+2] ){
            printf("YES\n");
            return 0;
        }

    }
    printf("NO\n");
    return 0;
}
