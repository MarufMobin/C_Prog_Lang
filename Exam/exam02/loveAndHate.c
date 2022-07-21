#include<stdio.h>
int main() {
    int n,e=0,t=n;
    scanf("%d",&n);
    while( n!=0 ) {
        if( n == 1 ) {
            if(e) printf("I Love it ");
            else printf("I Hate it ");
        } else {
            if(n==t) {
                printf("I hate that ");
                e=1;
            } else {
                if(e==1) {
                    printf("I love that ");
                    e=0;
                } else if(e==0) {
                    printf("I hate that ");
                    e=1;
                }
            }
        }
        n--;
    }
    return 0;
}
