#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d", &t);

   for( int i = 0; i < t; i++ ){
      int n;
      scanf("%d", &n);
      char a[n+1];
      for(int i = 0; i < n+1; i++ ){
        scanf("%c", &a[i]);
      }
      int count = 0;
      for( int i = 0; i < n+1; i++ ){
        if( strlen(a) > 11 && a[i] == '8' ){
            count++;
        }
      }
      if( count != 0 ){
        printf("YES\n");
      }else{
        printf("NO\n");
      }
   }
    return 0;
}
