#include<stdio.h>
#include<string.h>

int main(){

    char a[100], b[100];

    scanf("%s %s", &a, &b);
    int res = strcmp(a,b);

printf("%d", res);

}
