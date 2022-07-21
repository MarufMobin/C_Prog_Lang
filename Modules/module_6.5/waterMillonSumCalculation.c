#include<stdio.h>
int main(){
    //Find Smaller Number
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int one = a + b;
    int two = a + c;
    int three = b + c;
    if( ( one <= two) && (one <= three) ) {
        printf("%d",one);
    }else if( two <= three ){
        printf("%d",two);
    }else{
        printf("%d",three);
    }
    return 0;
}
