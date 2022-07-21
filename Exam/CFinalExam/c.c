#include<stdio.h>
#include<string.h>

int main(){

    int t;

    scanf("%d", &t);

    while( t-- ){
        int n;
        scanf("%d", &n);

        int arr[n];
        for( int i = 0; i < n; i++ ){
            scanf("%d", &arr[i]);
        }
        int len = sizeof( arr ) / sizeof( arr[0] );
        int k=0,i=0,j=len-1,a=0;

        int newarr[len];

        while(k<len){
           if(a%2==0) {
           newarr[i] = arr[i];
           i++;
           len--;
           a++;
          }
           else {
            newarr[i] = arr[j];
            j--;
            len--;
             a++;
           }
        }

        for( int i= 0; i < n; i++ ){
            printf("%d ", newarr[i]);
        }
    }

    return 0;
}
