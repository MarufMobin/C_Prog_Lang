#include<stdio.h>
#include<string.h>

int main(){

    char a[100], b[100],jogfol[101];
    scanf("%s %s", &a, &b );
    strrev(a);
    strrev(b);

    int i = 0, j= 0, k=0, hate=0;
    while( i < strlen(a) && j < strlen(b) ){
        int sum = ( a[i]-48 ) + ( b[j] - 48 )+hate;
        jogfol[k]=(sum%10+'0');
        hate = sum/10;
        i++;
        j++;
        k++;
    }
    while( i < strlen(a)){
        int sum = ( a[i]-48 )+hate;
        jogfol[k]=(sum%10+'0');
        hate = sum/10;
        i++;
        k++;
    }
     while( j < strlen(b)){
        int sum = ( b[j] - 48 )+hate;
        jogfol[k]=(sum%10+'0');
        hate = sum/10;
        j++;
        k++;
    }
    strrev(jogfol);
    printf("%s", jogfol);

}
