//void makeNArray(int n, int squares[]) populates squares with first n square numbers. For example,
//makeNarray(4, squares) will populate squares with 1, 4, 9, 16. Implement the function.

#include<stdio.h>
void makeNArray(int num, int squares[]) {
    for( int i = 0; i < num; i++ ){
        printf("%d ",squares[i]*squares[i]);
    }
}
int main(){
    int num;
    scanf("%d", &num);
    int squares[num];
    for( int i = 0; i < num ; i++){
        squares[i] = i+1;
    }

    makeNArray( num, squares);

    return 0;
}
