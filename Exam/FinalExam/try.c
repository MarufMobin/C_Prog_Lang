#include<stdio.h>
#include <string.h>

void stringCat(char *a, char *b, char *out){
    int len = 0;
    while (a[len] != '\0')
    {
        len++;
    }
    for (int i = 0; b[i] != '\0'; i++, len++)
    {
        a[len] = b[i];
    }
    a[len] = '\0';
    for (int i = 0; i < len; i++)
    {
        out[i] = a[i];
    }
    out[len] = '\0';
}
int main(){
    char str1[20] = "Maruf";
    char str2[20] = " Mobin";
    char out[100];
    stringCat(str1, str2, out);

    for (int i = 0; i < strlen(out); i++)
    {
        printf( "%c", out[i] );
    }

    return 0;
}
