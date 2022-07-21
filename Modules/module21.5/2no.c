//The following code finds the product of all elements in an array. Rewrite it using pointers.
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
   int a[n];
    int prod=1;
    for (int i=0; i<n; i++) {
        prod = prod * a[i];
    }
    printf("%d", prod);



}

