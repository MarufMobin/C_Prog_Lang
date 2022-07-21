#include<stdio.h>
#include<string.h>
int main(){
    int test;
    scanf("%d",&test);
    for( int i = 0; i < test; i++ ){
        int n;
        scanf("%d", &n);
        int ar[n];
        for( int i = 0; i< n; i++ ){
            scanf("%d", &ar[i]);
        }

//        for( int i = 0; i < n; i++ ){
//            printf("%d output",ar[i]);
//        }
        //Max Value find out
        int max = ar[0];
        for( int i = 0; i < n; i++ ){
            if( max < ar[i] ){
                max = ar[i];
            }
        }
        int count[max];
        for( int i = 0; i < max; i++){
            int val = ar[i];
            count[val]++;
        }
        for( int i = 0; i < max; i++ ){
            printf("%d This is count\n",count[i]);
        }
    }

}
