///Write a function named find_firstIndex() which will take a string and a character as parameters and
/// return the first index where the character is found in that string. If it is not found then return -1.

#include<stdio.h>

int find_firstIndex( char str[] , char ch){
    //find the length of array
    int index = 0;
    while( str[index] != '\0' ){
        index++;
    }
    int lastIndex = 0;
    for( int i = 0; i < index; i++ ){
        if( str[i]-'a' == ch-'a' ){
            return i+1;
        }
    }
    if( lastIndex == 0 ){
        return -1;
    }else{
        return lastIndex;
    }
}

int main(){
    printf("Enter the Sentence or Paragraph : ");
    char str[100];
    gets(str);
    printf("Enter The single character you want : ");
//    char ch[2];
//    gets(ch);
    char val;
    scanf("%c", &val);

    int result = find_firstIndex( str, val );
    printf("%d", result);
}
