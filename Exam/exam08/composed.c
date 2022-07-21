#include<stdio.h>
#include<string.h>

int main(){

      int n;
      scanf("%d", &n);
      int count=0;
    while(n!=0)
    {
       n=n/10;
       count++;
    }

   printf("\nThe number of digits in an integer is : %d",count);



}
