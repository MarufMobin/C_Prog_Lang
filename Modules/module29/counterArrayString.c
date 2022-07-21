//#include<stdio.h>
//#include<string.h>
//
//int main(){
//    char ar[100];
//    scanf("%s", &ar);
//    int counter[26] = {0};
//
//    for( int i = 0; i < strlen(ar); i++ ){
//        char val = ar[i];
//        counter[val-97]++;
//    }
//    for( char value = 'a'; value <= 'z'; value++ ){
//        if( counter[value-97] > 0 ) {
//            printf("value -> %c count -> %d \n", value, counter[value-97]);
//        }
//    }
//    return 0;
//}


///Interger Counter find out


#include<stdio.h>

int main(){
    int n;
    printf("Enter your Array Length : ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter You Value Less then 10 \n");
    for( int i =0; i < n; i++ ){
        scanf("%d", &ar[i]);
    }
    int count[10] = {0};
    for( int i = 0; i < n; i++ ){
        int val = ar[i];
        count[val]++;
    }
    for( int i = 0; i < 10; i++ ){
        printf("%d", count[i]);
    }

}
