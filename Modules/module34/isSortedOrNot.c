#include<stdio.h>
#include<stdbool.h>

void sort( int *ar, int n){
    for( int pos = 0; pos < n-1;pos++ ){
        for( int check=pos+1; check<n; check++ ){
            if( ar[check] < ar[pos] ){
                int temp = ar[check];
                ar[check]=ar[pos];
                ar[pos]=temp;
            }
        }
    }
}

void array_copy( int a[], int b[], int n ){
    for( int i = 0; i < n; i++ ){
        b[i] = a[i];
    }
}

bool is_sorted( int *a , int n )
{
    int b[n];
    array_copy( a, b, n );
    sort(b,n);
    for( int i = 0; i < n; i++ ){
        if( a[i] != b[i] ){
            return false;
        }
    }
    return true;
}

int main()
{
    int ar[6]={2,3,5,10,14,20};
    bool ans = is_sorted(ar, 6);
    if( ans ){
        printf("Yes, Sorted \n");
    }else{
        printf("No\n");
    }
//    sort( ar, 6 );
//    for( int i = 0; i < 6; i++ ){
//        printf("%d ", ar[i]);
//    }
    return 0;
}

