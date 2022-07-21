//#include<stdio.h>
//
//void makeSquare( int x ){
//    printf("%d", x * x );
//}
//int main(){
//
//    int x;
//    scanf("%d",&x);
//    makeSquare( x );

//}


//#include<stdio.h>
//int makeSquare( int x ){
//    return x * x;
//}
//int main(){
//
//    int n;
//    scanf("%d",&n);
//    system("cls");
//    for( int i = 1; i <= n; i++ ){
//        printf("%d \n", makeSquare( i ));
//    }
//}



#include<stdio.h>

int square( int x ){
    return x * x;
}

void printSquare( int x ){
    printf("%d %d \n",x, square(x) );
}

void sayHello(){
    printf("Hi Maruf\n");
}
int maxValue( int x, int y ){
    if( x > y ) return x;
    else        return y;
}
//Give me a integer then i will give you a character
char getAt( int x ){

    return 'A' + x -1 ;
}
int main(){
    sayHello();
    int n;
    printf("Give me a number which is your Faverate : ");
    scanf("%d", &n);
    system("cls");
    printf("%d\n", maxValue( 12, 30 ));
    for( int i = 1; i <= n; i++ ){
        printSquare(i);
    }

    //Give me a integer then feedback a Character

    for( int i = 1; i <= 26; i++ ){
        printf("%d -> %c \n",i ,getAt(i));
    }
}


