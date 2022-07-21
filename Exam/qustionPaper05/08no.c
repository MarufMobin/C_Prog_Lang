#include<stdio.h>
#include<float.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
bool isSorted(int arrSize, int arr[]){

   bool returnThis;
   for (int i = 0; i < arrSize - 1; i++)
   {
       if (arr[i]> arr[i+1])
       {
           returnThis = true;
       }
       else{
           returnThis = false;
           break;
       }
   }
   return returnThis;
}
void swap(int *a, int *b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

void revSort(int n, int arr[]){

   for (int i = 0; i < n; i++)
   {
       int maxNum = arr[i];
       int position = i;
       for (int j = i; j < n; j++)
       {
           if (arr[j] > maxNum)
           {
               maxNum = arr[j];
               position = j;
           }
       }
       swap(&arr[i], &arr[position]);

       if (isSorted(n, arr))
       {
           break;
       }

   }
}
int main(){

   int n;
   scanf( "%d", &n );
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       scanf( "%d", &arr[i] );
   }
   revSort(n, arr);
   for (int i = 0; i < n; i++)
   {
       printf( "%d ", arr[i] );
   }
   printf( "\n" );
   return 0;

