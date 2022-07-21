//This is a 100-element dynamically allocated float type array.
//We know that one float element takes 4 bytes to store, so this array will occupy 400 bytes.
#include<stdio.h>
#include<float.h>
#include<stdlib.h>
int main(){
   int n = 100;
   float *ptr = (float *)malloc(n * sizeof(float));
   if(ptr == NULL) {
       printf("Memory Are Not Allocated.");
       exit(0);
   }
   for (int i = 0; i < n; i++)
   {
       scanf("%f", ptr + i);
   }
   for (int i = 0; i < n; i++)
   {
       printf("%f ", *(ptr + i));
   }

   return 0;
}
