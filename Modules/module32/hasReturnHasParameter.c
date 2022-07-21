//#include<stdio.h>
//
//int get_length( int size, char input[] ){
//
//    int index = 0;
//    while( input[index] != '\0' ){
//        index++;
//    }
//    return index;
//}
//
//int main(){
//    char arr[100];
//    gets(arr);
//    int size = sizeof( arr )/ sizeof( arr[0] );
//    int result = get_length(size, &arr );
//    printf("%d", result);
//    return 0;
//}

#include<stdio.h>
int get_lenght( char input[] ){
    int index = 0;
    while( input[index] != '\0' ){
        index++;
    }
    return index;
}

int main(){

    char a[] = "hellobea", b[] = "world";
    int l1 = get_lenght(a);
    int l2 = get_lenght(b);
    printf("%d %d \n", l1,l2);
    return 0;

}
