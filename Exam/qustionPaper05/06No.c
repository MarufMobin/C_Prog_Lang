#include<stdio.h>

void swap(int *a, int *b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

void sortArr(int n, int a[]) {
   for (int steps=0; steps<n; steps++) {
       for (int i=n-1; i>0; i--) {

           if (a[i] < a[i-1])
           {
               swap(&a[i], &a[i - 1]);
           }

       }
   }
}

int main(){

   int n;
   scanf( "%d", &n );
   int unSortArr[n];
   for (int i = 0; i < n; i++)
   {
       scanf( "%d", unSortArr+i );
   }

   sortArr(n, unSortArr);

   for (int i = 0; i < n; i++)
   {
       printf("%d ", *(unSortArr + i));
   }
   printf( "\n" );

   return 0;
}
