#include<stdio.h>
#include<math.h>
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    int diff = A - B;
    int res = pow( 32 , diff );
    printf("%d", res);
    return 0;
}
