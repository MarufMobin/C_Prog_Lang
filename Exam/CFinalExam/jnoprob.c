#include<stdio.h>
#include<string.h>

int main(){

    int N;
    int i = 0;
    while(N){
        char ch[100];
        gets(ch[i]);
        printf("%s", ch[i]);
        N--;
        i++;
    }
    return 0;
}
