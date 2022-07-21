#include<stdio.h>

int main(){

   //find size of Array
   int N;
   scanf("%d", &N);
   int values[N];
   printf("%d", sizeof(values)/sizeof(values[0]));
}
