//#include<stdio.h>
//#include<string.h>
//
//unsigned int binaryToInt( char str[] ){
//    int len = strlen(str);
//    unsigned int ans = 0;
//    for( int i = len-1, p2=1; i >= 0; i--, p2*=2 ){
//        int bit = str[i] - '0';
//        //printf("%d %d %d\n", i , p2, bit);
//        if( bit == 1 ){
//            ans += p2;
//        }
//    }
//    return ans;
//}
//
//int main(){
//    char str[100];
//    gets(str);
//   int result = binaryToInt(str);
//   printf("%d", result);
//}

// Binary to integer another way

//#include<stdio.h>
//#include<string.h>
//unsigned int binaryToInt( char str[]){
//    int len = strlen(str);
//    unsigned int ans = 0;
//    for( int i = 0; i<len; i++ ){
//        int bit = str[i] - '0';
//        ans = ans*2+bit;
//    }
//    return ans;
//}
//int main(){
//    char str[100];
//    gets(str);
//    printf("%d", binaryToInt(str));
//}


// Binary to integer

#include<stdio.h>
#include<string.h>
void toBinary( unsigned int val, char str[]){
    int idx = 0;
    while( val > 0 ){
        int d = val % 2;
        val = val / 2;
        printf("%d", d);
        str[idx] = '0' + d;
        idx++;
    }
    str[idx] = '\0';
}
int main(){
    char str[100];
    gets(str);
    unsigned int v = 10;
    toBinary(v, str);
    printf("%S\n", str);
}
