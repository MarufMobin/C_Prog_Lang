#include<stdio.h>
#include<string.h>

int main(){

    char str1[100], str2[100];
    scanf("%s %s", &str1, &str2);

    int length1 = strlen(str1);
    printf("First String Length: %d \n", length1);

    int index = 0;

    while( str2[index] != '\0' ){
        index++;
    }
    printf("Second String Lenght %d\n", index);
}
