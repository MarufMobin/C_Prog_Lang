//You know palindromes, right? Now make a function named check_palindrome()
//which will take a string as a parameter and return the minimum number of characters
// you need to change so that the string can become palindrome. You can’t add or delete any character.
//For example: check_palindrome(“abcdba”) will return 1 as you can change the character of
// index 2 to ‘d’ or character of index 3 to ‘c’ to make it palindrome.

#include<stdio.h>
#include<string.h>

int check_palindrome( char ch[] ){
    int len = strlen(ch);
    for( int i = 0, j = len-1; i < j ; i++, j-- ){
        if( ch[i]-'a' != ch[j]-'a' ){
           return ch[j]-'a';
        }
    }
  printf("This is Palindrome Value");
}
int main(){
    char ch[] = "abefba";
    int result = check_palindrome(ch);
    printf("%c", ch[result]);
    return 0;
}
