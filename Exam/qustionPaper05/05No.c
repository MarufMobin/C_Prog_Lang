#include<stdio.h>
int main(){
   int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

   //1. a[8] == 9

   //2. &a[5] == address of it in my memory in hexadecimal 0x7fffffffdad4 and in int formate 140737488345812

   //3. a == In this array 'a' represent the pointer of first element. Address of it in my memory in hexadecimal 0x7fffffffdac0 and in int formate 140737488345792

   // 4. a+4 == It's represent the pointer of 5th value in this array. Its hexadecimal location in my memory is 0x7fffffdad0, and its int format is 140737488345808

   //5. *(a+2) == 3

   //6. &*(a+4) == Its hexadecimal location in my memory is 0x7fffffdad0, and its int format is 140737488345808

   return 0;
}
