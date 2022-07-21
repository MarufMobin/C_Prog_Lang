#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int result = 0;
    for( int i = 1; i <= n ; i++ ){
        int task;
        scanf("%d", &task);
        if( task == 1 ){ result++; }
    }
    if( result > 0 ) { printf("HARD\n"); }
    else { printf("EASY\n"); }
    return 0;

}
