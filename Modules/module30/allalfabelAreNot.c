///Check if a string contains all alphabets
#include<stdio.h>

int main(){

    char a[100];
    gets(a);
    int counter[26] = {0};
    for( int i = 0;  i < strlen(a); i++ ){
        char value = a[i];
        counter[value-'a'] = 1;
    }

    for( char value = 'a'; value <= 'z'; value++ ){
        if( counter[value-'a'] == 0 ){
            printf("No\n");
            return 0;
        }
    }
    printf("yes");
    return 0;
}
