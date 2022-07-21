#include<stdio.h>
#include<float.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

bool isReversed(int arrSize, int arr[]){

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

int main(){

   int arr[] = {6, 4, 3, 1};
   // int arr[] = {5, 4, 3, 1, 2};

   int arrSize = sizeof(arr) / sizeof(arr[0]);

   bool myArr = isReversed(arrSize, arr);
   if (myArr)
   {
       printf( "Yes" );
   }
   else{
       printf("No");
   }


   return 0;
}
