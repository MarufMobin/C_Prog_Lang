#include<stdio.h>

void printTriangularNumber( int n ){
        int sum = 0;
        for( int i = 1; i <= n; i++){
            sum += i;
        }
        printf("%d",sum);

}

int main(){

        int n;
        scanf("%d",&n);

    //Print Triangular number

    printTriangularNumber(n);
}
