//#include<stdio.h>
//#include<string.h>
//
//int main(){
//    char ar[100];
//    scanf("%s", &ar);
//    int index = 0;
//
////    while( ar[index] != '\0' ){
////        index++;
////    }
//        //using for loop for find out length of a string
////    for( index = 0; ar[index] != 0 ; index++ ){}
//
//    int len = strlen(ar);
//    printf("%d", len);
//}
///String Copy one to another one

//#include<stdio.h>
//#include<string.h>
//
//int main(){
//
//    int a[100], b[100];
//    scanf("%s %s", &a , &b);
//    strcpy(a,b);
//    printf("%s", a);
//}

///String Concatination
#include<stdio.h>
#include<string.h>

int main(){

    char a[100], b[100];
    scanf("%s %s", &a, &b);
    strcat(a,b);
    printf("%s", a);

}
