#include<stdio.h>
#include<string.h>

int main(){

    int testCase;
    scanf("%d", &testCase);

    int numOfArray[]={0};
    for( int i = 0; i < testCase; i++){
        scanf("%d", &numOfArray);
        int lastArray[]={0};
        for( int i = 0; i < numOfArray[i]; i++ ){
            scanf("%d", &lastArray[i]);
        }
        int counter[11];
        for( int i =0; i < 11; i++ ){
            counter[lastArray[i]-48]++;
        }
        printf("%d \n", counter);
    }
    return 0;
}
