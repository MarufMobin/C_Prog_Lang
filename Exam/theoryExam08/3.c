//Make a function named count_zero() which will take a binary string (Binary string is a string which is consist of only 0 and 1) as parameter and count how many 0’s are there in that string

#include<stdio.h>
int count_zero( char arr[] ){
    int index = 0;
    int count = 0;
    while( arr[index] != '\0' ){
        if( arr[index]-'a' == '0'-'a' ){
            count++;
        }
        index++;
    }
    return count;
}
int main(){
    char arr[] = "0101010001010110";
    int countZero = count_zero(arr);
    printf("%d", countZero);
}



