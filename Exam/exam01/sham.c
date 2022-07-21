#include<stdio.h>

int main() {
    int amount, father, mother, takashi;
    scanf("%d %d %d %d", &amount , &father ,&mother , &takashi );

//   for( int i = 1; i <= amount; i++){
////        printf("%d\n",i);
////        printf("Father %d\n", amount-father);
////        printf("Father %d\n", amount-mother);
////        printf("Father %d\n", amount-takashi);
//
//
//   }

//    while( amount > 0 ){
//      amount > father ? amount -= father : printf("F");
//      amount > mother ? amount -= mother : printf("M");
//      amount > takashi ? amount -= takashi : printf("T");
//    }

    while( amount > 0 ){
        if( amount >= father ){
            amount-=father;
            printf("%d Father\n",amount);
        }else{
            if( father <= 0 ){
                printf("F\n");
            }
        }
        if( amount >= mother ){
            amount -= mother;
            printf("%d MOther\n",amount);
        }else{
            printf("M\n");
        }
        if( amount >= takashi ){
            amount -= takashi;
            printf("%d takashi\n",amount);
        }else{
            printf("T\n");
        }

    }

}
