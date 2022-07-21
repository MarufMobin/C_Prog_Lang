#include<stdio.h>

int get_length( char a[] ){
    int index = 0;
    while( a[index] != '\0' ){
        index++;
    }
    return index;
}

int main(){

    char a[100];
    gets(a);

    int lengthOfString = get_length(a);
    printf("%d", lengthOfString);

}
