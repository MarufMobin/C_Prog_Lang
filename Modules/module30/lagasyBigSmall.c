#include<stdio.h>
#include<string.h>

int main(){

    char a[100],b[100];
        scanf("%s", &a);
        scanf("%s", &b);
//    gets(a);
//    gets(b);
    int comp = strcmp(a,b);
    printf("%d",comp);

}
